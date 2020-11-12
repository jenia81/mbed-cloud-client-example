// ----------------------------------------------------------------------------
// Copyright 2020 ARM Limited or its affiliates
//
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------------------------------------------------------

#include <inttypes.h>

const uint8_t arm_uc_vendor_id[] = { "dev_manufacturer" };
const uint16_t arm_uc_vendor_id_size = sizeof(arm_uc_vendor_id);

const uint8_t arm_uc_class_id[]  = { "dev_model_number" };
const uint16_t arm_uc_class_id_size = sizeof(arm_uc_class_id);

const uint8_t arm_uc_default_fingerprint[32] = { 0 };
const uint16_t arm_uc_default_fingerprint_size =
    sizeof(arm_uc_default_fingerprint);

const uint8_t arm_uc_default_certificate[1] = { 0 };
const uint16_t arm_uc_default_certificate_size =
    sizeof(arm_uc_default_certificate);

const uint8_t arm_uc_update_public_key[65] = { 0 };
