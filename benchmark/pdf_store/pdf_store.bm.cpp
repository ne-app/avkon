// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/adb

#include <ne_app/core/pdf.hpp>
#include <benchmark/registration.h>
#include <benchmark/state.h>

static void BM_ReadPDF(benchmark::State& state) {
  for (auto _ : state) {
    /// TODO: Do heavy stuff with the sample PDF. Don't handle exceptions.
     ::ne_app::pdf::render("sample.pdf", ::strlen("sample.pdf"));
  }
}

BENCHMARK(BM_ReadPDF);
BENCHMARK_MAIN();
