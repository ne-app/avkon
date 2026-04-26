// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/avkon

#include <ne_app/core/pdf.hpp>

int main(int argc, char** argv) {
    if (argc < 2) return 1;
    return ::pdf_view_document(argv[1], ::strlen(argv[1]));
}