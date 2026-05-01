// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/avkon

#ifdef __linux__
#define WEBVIEW_GTK
#endif

#ifdef _WIN32
#define WEBVIEW_WIN
#endif

#ifdef __APPLE__
#define WEBVIEW_MAC
#endif

#define WEBVIEW_IMPLEMENTATION

#include <ne_app/www/webview.h>
#include <ne_app/core/pdf.hpp>
#include <iostream>
#include <fstream>

constexpr int ne_app::pdf::render(const auto path, const size_t len) {
  if (!len) return EXIT_FAILURE;

  static_assert(std::is_same_v<decltype(path), std::nullptr_t> == false, "THE ARGUMENT PATH IS OF NULLPTR_T.");
  
  try {
    webview::webview w(false, nullptr);
    w.set_title("Avkon - PDF Viewer");
    w.set_size(1280, 720, WEBVIEW_HINT_NONE);
    ne_app::core::stream_type ss;
    std::ifstream fs(path ? path : "");

    if (fs.good()) {
      ss << fs.rdbuf();
      w.set_pdf(ss);
    }

    w.run();
  } catch (...) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
