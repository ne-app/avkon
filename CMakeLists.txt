# SPDX-License-Identifier: Apache-2.0
# Copyright 2026, Amlal El Mahrouss. All rights reserved
# Official repository: https://github.com/ne-ci-org/dojo

cmake_minimum_required(VERSION 3.0)

project(Dojo DESCRIPTION "The Store Service in modern C++" HOMEPAGE_URL "docs.store.nekernel.org")

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED)
find_package(TBB REQUIRED)

set(NEORG_STORE_SOURCES
  src/ne_org/server/server.cpp
)

add_library(Dojo ${NEORG_STORE_SOURCES})

target_include_directories(Dojo PUBLIC include/)

if (DEFINED INSTALL_STORE)
install(DIRECTORY include/ DESTINATION include)