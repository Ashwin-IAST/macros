#include "../include/transmission_control.h"

static uint8_t current_gear = 1;

void transmission_control_start(void) {
    log_message("Transmission control initialized.");
}

void transmission_control_update(void) {
    if (current_gear < TRANSMISSION_GEAR_COUNT) {
        current_gear++;
    }
}
