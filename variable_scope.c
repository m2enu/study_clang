#include <stdio.h>

int main(void) {
    int a = 10;
    printf("a = %d\n", a);
    {
        printf("a = %d\n", ++a);
        int b = 20;
        printf("b = %d\n", b);
    }
    // printf("b = %d", b); // can't identify "b" in this scope.
    return 0;
}
