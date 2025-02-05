#include "../include/main.h"

int main(void) {
    system_init();
    engine_control_start();
    transmission_control_start();

    while (1) {
        engine_control_update();
        transmission_control_update();
    }

    return 0;
}
