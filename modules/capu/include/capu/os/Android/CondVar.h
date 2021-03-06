/*
 * Copyright (C) 2013 BMW Car IT GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CAPU_ANDROID_CONDVAR_H
#define CAPU_ANDROID_CONDVAR_H

#include <capu/os/Posix/CondVar.h>

namespace capu
{
    namespace os
    {
        class CondVar: private capu::posix::CondVar
        {
        public:
            using capu::posix::CondVar::signal;
            using capu::posix::CondVar::wait;
            using capu::posix::CondVar::broadcast;
        };
    }
}
#endif // CAPU_ANDROID_CONDVAR_H
