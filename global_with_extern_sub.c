#include "global_with_extern.h"
#include <stdio.h>

int global_var = 0;

int func(void) {
    return ++global_var;
}
