// SPDX-License-Identifier: Propietary
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

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

#include <fstream>
#include <iostream>
#include <ne_app/core/pdf.hpp>

constexpr int pdf_view_document(const char* path, const size_t len) {
  if (!len) return EXIT_FAILURE;

  try {
    webview::webview w(false, nullptr);
    w.set_title("Aven - PDF Viewer");
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
