# SPDX-License-Identifier: Apache-2.0
# Copyright 2026, Amlal El Mahrouss. All rights reserved
# Official repository: https://github.com/ne-app/dojo

cmake_minimum_required(VERSION 3.31.6)

project(Dojo DESCRIPTION "The Store Service in modern C++" HOMEPAGE_URL "docs.store.nekernel.org")

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED)
find_package(TBB REQUIRED)
find_package(GTK REQUIRED)
find_package(PkgConfig REQUIRED)

pkg_check_modules(JSC REQUIRED javascriptcoregtk-6.0)
pkg_check_modules(GTK REQUIRED gtk+-3.0)
pkg_check_modules(WGTK REQUIRED webkitgtk-6.0)

set(NEAPP_AVEN_SOURCES
  src/ne_app/app/pdf.viewer.cpp
)

add_executable(Dojo ${NEAPP_AVEN_SOURCES})

target_include_directories(Dojo PUBLIC include/ ${JSC_INCLUDE_DIRS} 
                          ${WGTK_INCLUDE_DIRS} ${GTK_INCLUDE_DIRS})
target_link_libraries(Dojo ${JSC_LIBRARIES} ${WGTK_LIBRARIES} ${GTK_LIBRARIES})

if (DEFINED INSTALL_STORE)
    install(DIRECTORY include/ DESTINATION include)
endif()
