#include "no_include_guard_01.h"
#include "no_include_guard_02.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("no include guard, so this line will never call ...\n");
    return 0;
}
