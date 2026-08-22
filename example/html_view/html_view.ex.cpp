// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/adb

#include <ne_app/core/pdf.hpp>

int main(int argc, char** argv) {
  if (argc < 2) return EXIT_FAILURE;

  try {
    return ::ne_app::html::render(argv[1], ::strlen(argv[1]));
  } catch (...) {
    return EXIT_FAILURE;
  }
}