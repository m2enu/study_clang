#include "global_with_extern.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("case of global variable with extern\n");
    printf("  global_var = %d\n", global_var);
    printf("  func() = %d\n", func());
    printf("  global_var = %d\n", global_var);
    printf("  func() = %d\n", func());
    printf("  global_var = %d\n", global_var);
    printf("  func() = %d\n", func());
    return 0;
}
