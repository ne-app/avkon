// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#ifndef NEORG_STORE_CORE_HPP
#define NEORG_STORE_CORE_HPP

#include <ne_org/core/detail/config.hpp>
#include <ocl/alloc_op.hpp>

namespace ne_org::core {

inline void throw_error(
    const boost::source_location& src = BOOST_CURRENT_LOCATION) {
  std::printf("ERROR: SourceLocation: %s", src.to_string().c_str());
  throw src;
}

template <typename KeyType, typename ValueType>
struct storage_pair {
  using key_type = KeyType;
  using value_type = ValueType;
};

template <typename Pair>
struct storage_object final {
  using key_type = typename Pair::key_type;
  using value_type = typename Pair::value_type;

  key_type key_;
  value_type value_;
};

}  // namespace ne_org::core

#endif  // ifndef NEORG_STORE_CORE_HPP
