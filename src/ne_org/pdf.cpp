// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#include <ne_org/core/pdf.hpp>

#define NEORG_PDF_MAGIC "%PDF_1."

bool ne_org::pdf_pair::is_valid(ne_org::pdf_pair::key_type& key) noexcept {
  return key.starts_with(NEORG_PDF_MAGIC);
}

ne_org::core::stream_type& operator<<(ne_org::core::stream_type& os,
                          ne_org::core::storage_object<ne_org::pdf_pair>& obj) {
  if (!obj.is_valid(obj.key_)) ne_org::core::throw_error();
  if (obj.value_.bad()) ne_org::core::throw_error();

  os << obj.value_.str();

  return os;
}

ne_org::core::stream_type& operator>>(ne_org::core::stream_type& is,
                          ne_org::core::storage_object<ne_org::pdf_pair>& obj) {
  if (!obj.is_valid(obj.key_)) ne_org::core::throw_error();
  if (obj.value_.bad()) ne_org::core::throw_error();

  obj.value_ >> is.rdbuf();

  return is;
}