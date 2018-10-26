#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t u8;
    uint16_t u16;
} test_struct_t;

#define INIT_STRUCT(u8_, u16_) { .u8 = (u8_), .u16 = (u16_) }

int main(void) {
    test_struct_t st1 = INIT_STRUCT(127, 32767);
    printf("%4d %6d\n", st1.u8, st1.u16);
    return 0;
}
