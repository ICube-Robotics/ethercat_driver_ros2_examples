// Copyright 2023, ICube Laboratory, University of Strasbourg
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

#ifndef ETHERCAT_FORCE_SENSOR__CONFIG__EASYCAT_CONFIG__FORCESENSOR_H_
#define ETHERCAT_FORCE_SENSOR__CONFIG__EASYCAT_CONFIG__FORCESENSOR_H_

//-------------------------------------------------------------------//
//                                                                   //
//     This file has been created by the Easy Configurator tool      //
//                                                                   //
//     Easy Configurator project ForceSensor.prj
//                                                                   //
//-------------------------------------------------------------------//


#define CUST_BYTE_NUM_OUT       0
#define CUST_BYTE_NUM_IN        4
#define TOT_BYTE_NUM_ROUND_OUT  0
#define TOT_BYTE_NUM_ROUND_IN   4

//---- output buffer ----
typedef union {
  uint8_t Byte[TOT_BYTE_NUM_ROUND_OUT];
  struct
  {
  } Cust;
} PROCBUFFER_OUT;

//---- input buffer ----
typedef union {
  uint8_t Byte[TOT_BYTE_NUM_ROUND_IN];
  struct
  {
    int16_t force_0;
    int16_t force_1;
  } Cust;
} PROCBUFFER_IN;

#endif  // ETHERCAT_FORCE_SENSOR__CONFIG__EASYCAT_CONFIG__FORCESENSOR_H_
