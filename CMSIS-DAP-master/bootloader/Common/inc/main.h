/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>

#define TRANSFER_FINISHED_SUCCESS       (1 << 0)
#define TRANSFER_FINISHED_FAIL          (1 << 1)
#define PROGRAMMING_FINISH				(1 << 2)
#define PROGRAMMING_FAIL				(1 << 3)


void main_transfer_finished(uint8_t success);
void main_reset_target(uint8_t send_unique_id);
void main_disable_debug_event(void);
void main_powerdown_event(void);





#endif
