# SPDX-License-Identifier: Apache-2.0
# Copyright 2026, Amlal El Mahrouss. All rights reserved
# Official repository: https://github.com/ne-app/avkon

cmake_minimum_required(VERSION 3.31.6)

project(Avkon DESCRIPTION "The Avkon SDK in modern C++" HOMEPAGE_URL "internal.ne-app.eu/avkon")

set(CMAKE_CXX_STANDARD 23)

if (NOT DEFINED CMAKE_HOST_WIN32)
  find_package(Boost REQUIRED)
  find_package(TBB REQUIRED)
  find_package(GTK REQUIRED)
  find_package(PkgConfig REQUIRED)

  pkg_check_modules(JSC REQUIRED javascriptcoregtk-6.0)
  pkg_check_modules(GTK REQUIRED gtk+-3.0)
  pkg_check_modules(WGTK REQUIRED webkitgtk-6.0)
endif()

set(NEAPP_AVEN_SOURCES
  src/ne_app/app/pdf.viewer.cpp
  src/ne_app/pdf.cpp
)

add_executable(Avkon ${NEAPP_AVEN_SOURCES})

if (NOT DEFINED CMAKE_HOST_WIN32)
  target_include_directories(Avkon PUBLIC include/ ${JSC_INCLUDE_DIRS} 
                            ${WGTK_INCLUDE_DIRS} ${GTK_INCLUDE_DIRS})
  target_link_libraries(Avkon ${JSC_LIBRARIES} ${WGTK_LIBRARIES} ${GTK_LIBRARIES})
else()
  target_include_directories(Avkon PUBLIC include/ C:/local/ocl/)
  target_include_directories(Avkon PUBLIC include/ C:/local/boost_1_90_0/)
endif()

if (DEFINED INSTALL_STORE)
  install(DIRECTORY include/ DESTINATION include)
endif()
