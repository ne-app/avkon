// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss and Ne.org Authors. All rights reserved
// Official repository: https://github.com/ne-ci-org/storage-service

#ifndef NEORG_STORE_CONFIG_HPP
#define NEORG_STORE_CONFIG_HPP

#include <boost/asio.hpp>
#include <boost/assert/source_location.hpp>

#define NEORG_STORE_VERSION "v0.0.0-release"
#define NEORG_STORE_VERSION_BCD 0x0000000

namespace ne_org::core {

template <typename Pair>
struct storage_object;

template <typename Key, typename Data>
struct storage_pair;

using version_type = uint32_t;

}  // namespace ne_org::core

#endif