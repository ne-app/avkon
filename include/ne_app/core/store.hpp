// SPDX-License-Identifier: Propietary
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#ifndef NEAPP_STORE_CORE_HPP
#define NEAPP_STORE_CORE_HPP

#include <ne_app/core/detail/config.hpp>
#include <ocl/alloc_op.hpp>
#include <string>

namespace ne_app::core {

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
struct storage_object final : public Pair {
  using key_type = typename Pair::key_type;
  using value_type = typename Pair::value_type;

  key_type key_;
  value_type value_;
};

}  // namespace ne_app::core

#endif  // ifndef NEAPP_STORE_CORE_HPP
