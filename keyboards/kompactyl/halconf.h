#pragma once

#include_next <halconf.h>

#undef HAL_USE_SIO
#define HAL_USE_SIO TRUE

#undef HAL_USE_UART
#define HAL_USE_UART FALSE
