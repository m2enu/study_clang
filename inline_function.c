#include <stdio.h>
#include <stdint.h>

static inline uint16_t concat_u8s_u16(const uint8_t* bufs) {
    return (
        ((uint16_t)bufs[0]) | (((uint16_t)bufs[1]) << 8));
}

int main(void) {
    uint8_t tmp1[] = {0x01, 0x02, 0x03, 0x04};
    uint8_t tmp2[] = {0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c};

    uint16_t v11 = concat_u8s_u16(&tmp1[0]);
    uint16_t v12 = concat_u8s_u16(&tmp1[2]);
    uint16_t v21 = concat_u8s_u16(&tmp2[0]);
    uint16_t v22 = concat_u8s_u16(&tmp2[2]);
    uint16_t v23 = concat_u8s_u16(&tmp2[4]);
    uint16_t v24 = concat_u8s_u16(&tmp2[6]);

    printf("v11 = 0x%04x\n", v11);
    printf("v12 = 0x%04x\n", v12);
    printf("v21 = 0x%04x\n", v21);
    printf("v22 = 0x%04x\n", v22);
    printf("v23 = 0x%04x\n", v23);
    printf("v24 = 0x%04x\n", v24);

    return 0;
}
