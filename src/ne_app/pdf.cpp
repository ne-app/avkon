// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/avkon

#include <ne_app/core/pdf.hpp>

#define NEAPP_PDF_MAGIC "%PDF_2."

bool ne_app::pdf_pair::is_valid(ne_app::pdf_pair::key_type& key) noexcept {
  return key.starts_with(NEAPP_PDF_MAGIC);
}

ne_app::core::stream_type& operator<<(ne_app::core::stream_type& os,
                          ne_app::core::storage_object<ne_app::pdf_pair>& obj) {
  if (!obj.is_valid(obj.key_)) ne_app::core::throw_error();
  if (obj.value_.bad()) ne_app::core::throw_error();

  os << obj.value_.str();

  return os;
}

ne_app::core::stream_type& operator>>(ne_app::core::stream_type& is,
                          ne_app::core::storage_object<ne_app::pdf_pair>& obj) {
  if (!obj.is_valid(obj.key_)) ne_app::core::throw_error();
  if (obj.value_.bad()) ne_app::core::throw_error();

  ne_app::core::stream_type tmp_is;
  tmp_is >> obj.value_.rdbuf();

  is >> tmp_is.rdbuf();

  return is;
}