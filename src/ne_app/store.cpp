// SPDX-License-Identifier: Propietary
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-app/dojo

#include <ne_app/core/store.hpp>

void throw_error(
    const boost::source_location& src = BOOST_CURRENT_LOCATION) {
  std::print("ERROR: SourceLocation: %s", src.to_string().c_str());
  throw src;
}