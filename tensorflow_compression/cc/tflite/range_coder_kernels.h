/* Copyright 2022 Google LLC. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPRESSION_CC_KERNELS_TFLITE_KERNELS_H_
#define TENSORFLOW_COMPRESSION_CC_KERNELS_TFLITE_KERNELS_H_

#include "tensorflow/lite/kernels/register.h"

namespace tensorflow_compression {

void RegisterRangeCoderOps(tflite::ops::builtin::BuiltinOpResolver* resolver);

}  // namespace tensorflow_compression

#endif  // TENSORFLOW_COMPRESSION_CC_KERNELS_TFLITE_KERNELS_H_
