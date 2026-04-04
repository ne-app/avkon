// SPDX-License-Identifier: Propietary
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#include "ne_app/core/detail/config.hpp"
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

int main(int argc, char** argv) {
  try {
    webview::webview w(false, nullptr);
    w.set_title("Aven - PDF Viewer");
    w.set_size(1280, 720, WEBVIEW_HINT_NONE);
    ne_app::core::stream_type ss;
    std::ifstream fs(argv[1] ? argv[1] : "");

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
