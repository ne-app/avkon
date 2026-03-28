// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss. All rights reserved
// Official repository: https://github.com/ne-ci-org/dojo

#include <boost/beast.hpp>
#include <iostream>
#include <ne_org/core/store.hpp>

using namespace ::boost;
using namespace ::boost::asio;
using namespace ::boost::beast;

int main(int argc, char** argv) {
  if (argc != 5) {
    std::cerr << "Usage: storage-server <address> <port> <threads>\n"
              << "Example:\n"
              << "    storage-server 0.0.0.0 8080 1\n";
    return EXIT_FAILURE;
  }

  auto const address = net::ip::make_address(argv[1]);
  auto const port = static_cast<unsigned short>(std::atoi(argv[2]));
  auto const threads = std::max<int>(1, std::atoi(argv[4]));

  using endpoint_type = net::ip::tcp::endpoint;

  net::io_context ioc{threads};

  
  
  ioc.run();

  return EXIT_SUCCESS;
}
