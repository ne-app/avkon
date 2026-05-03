// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/avkon

#include <ne_app/core/store.hpp>

void ne_app::core::throw_pdf_error(const boost::source_location& src) {
  std::print("PDF-ERROR: Location: %s", src.to_string().c_str());
  throw src;
}