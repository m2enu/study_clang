#include <stdio.h>
#include <stdint.h>

typedef struct {
    const uint8_t const_uint8;
    const int8_t const_int8;
    uint8_t variable_uint8;
    int8_t variable_int8;
} test_struct_t;

void show(test_struct_t* st) {
    printf("%4d %4d %4d %4d\n", st->const_uint8, st->const_int8,
        st->variable_uint8, st->variable_int8);
}

int main(void) {
    test_struct_t st1 = {10, 20, 30, 40};
    test_struct_t st2 = {51, 61, 71, 81};

    show(&st1);
    show(&st2);

    st1.variable_uint8 =  255;
    st1.variable_int8  = -128;
    st2.variable_uint8 =    0;
    st2.variable_int8  =   -1;

    show(&st1);
    show(&st2);
}
