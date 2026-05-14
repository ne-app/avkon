// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app, All rights reserved
// Official repository: https://github.com/ne-app/avkon

#pragma once

#include <ne_app/www/httplib/httplib.h>

#define NE_APP_API "${API_URL}"
#define NE_APP_API_VERSION "${API_VERSION}"
#define NE_APP_API_BASE NE_APP_API NE_APP_API_VERSION "${API_BASE}"
#define NE_APP_API_PORT "${API_PORT}"

namespace ne_app {

    struct api_config;

}