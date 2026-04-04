// SPDX-License-Identifier: Propietary
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#ifndef NEAPP_AVEN_CONFIG_HPP
#define NEAPP_AVEN_CONFIG_HPP

#include <boost/asio.hpp>
#include <boost/assert/source_location.hpp>

#define NEAPP_AVEN_VERSION "v0.0.0-release"
#define NEAPP_AVEN_VERSION_BCD 0x0000000

namespace ne_app::core {

template <typename Pair>
struct storage_object;

template <typename Key, typename Data>
struct storage_pair;

using version_type = uint32_t;

using stream_type = std::stringstream;

}  // namespace ne_app::core

#endif