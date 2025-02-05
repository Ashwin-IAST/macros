#ifndef COMMON_H
#define COMMON_H

#include "../config/project_config.h"  // Including project-wide macros

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long uint32_t;

// Common function prototypes
void log_message(const char *message);
void system_init(void);

#endif // COMMON_H
