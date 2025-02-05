#include "../include/common.h"
#include <stdio.h>

void log_message(const char *message) {
    if (DEBUG_MODE) {
        printf("[LOG]: %s\n", message);
    }
}
