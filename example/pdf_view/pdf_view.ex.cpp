// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/adb

#include <ne_app/core/pdf.hpp>

int main(int argc, char** argv) {
    if (argc < 2) return 1;
    return ::ne_app::pdf::render(argv[1], ::strlen(argv[1]));
}