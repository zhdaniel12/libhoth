// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LIBHOTH_EXAMPLES_SRTM_H_
#define LIBHOTH_EXAMPLES_SRTM_H_

#include "host_commands.h"

#ifdef __cplusplus
extern "C" {
#endif

// Populates an ec_srtm_request the given measurement data. `measurement` is
// expected to be a hex string.
int srtm_request_from_hex_measurement(struct hoth_srtm_request* request,
                                      const char* measurement);

#ifdef __cplusplus
}
#endif

#endif  // LIBHOTH_EXAMPLES_SRTM_H_
