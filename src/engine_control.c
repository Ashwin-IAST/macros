#include "../include/engine_control.h"

static uint16_t current_rpm = MIN_RPM;

void engine_control_start(void) {
    log_message("Engine control started.");
}

void engine_control_update(void) {
    if (DEBUG_MODE) {
        log_message("Engine update cycle running.");
    }

    if (current_rpm < MAX_RPM) {
        current_rpm += 100;
    }
}
