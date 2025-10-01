#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main(void) {
    struct config_t *config = read_config("../config.ini");
    print_config(config);
    return 0;
}
