// SPDX-License-Identifier: Apache 2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/avkon

#ifndef NEAPP_AVEN_PDF_HPP
#define NEAPP_AVEN_PDF_HPP

#include <ne_app/core/store.hpp>
#include <sstream>

namespace ne_app {

struct pdf_pair;

struct pdf_pair {
  using key_type = std::string;
  using value_type = std::stringstream;

  bool is_valid(key_type& key) noexcept;
};

}  // namespace ne_app

ne_app::core::stream_type& operator<<(ne_app::core::stream_type& os,
                          ne_app::core::storage_object<ne_app::pdf_pair>&);

ne_app::core::stream_type& operator>>(ne_app::core::stream_type& is,
                          ne_app::core::storage_object<ne_app::pdf_pair>&);

constexpr int pdf_view_document(const auto path, const size_t len);

#endif