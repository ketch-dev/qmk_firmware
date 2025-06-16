#pragma once

#define HAL_USE_SIO TRUE   // Enable RP2040's SIO driver
#define HAL_USE_UART FALSE // Disable standard UART

#include_next <halconf.h>