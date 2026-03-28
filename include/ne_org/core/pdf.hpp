// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#ifndef NEORG_STORE_PDF_HPP
#define NEORG_STORE_PDF_HPP

#include <ne_org/core/store.hpp>
#include <sstream>

namespace ne_org {
struct pdf_pair;

struct pdf_pair {
  using key_type = std::string;
  using value_type = std::stringstream;

  bool is_valid(key_type& key) noexcept;
};
}  // namespace ne_org

ne_org::core::stream_type& operator<<(ne_org::core::stream_type& os,
                          ne_org::core::storage_object<ne_org::pdf_pair>&);

ne_org::core::stream_type& operator>>(ne_org::core::stream_type& is,
                          ne_org::core::storage_object<ne_org::pdf_pair>&);

#endif