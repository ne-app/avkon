// SPDX-License-Identifier: Apache-2.0
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
#include <ne_app/core/pdf.hpp>
#include <ne_app/www/webview.h>
#include <iostream>

using namespace ::boost;
using namespace ::boost::asio;
using namespace ::ne_app::core;
using namespace ::ne_app;

int main(int argc, char** argv) {
  try {
    webview::webview w(false, nullptr);
    w.set_title("Dojo - PDF");
    w.set_size(1280, 720, WEBVIEW_HINT_NONE);
    w.navigate("file:///home/amlal/ne-ci-org/dojo/test/snippets/cpumemory.pdf");
    w.run();
  } catch (const webview::exception& e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }

  return EXIT_SUCCESS;
}
