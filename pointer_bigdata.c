#include <stdio.h>
#include <stdint.h>

#define LEN_ARRAY       32

// data definition {{{1
typedef struct mock_data_t_tag {
    int16_t offset;
    int16_t length;
    uint8_t data[LEN_ARRAY];
} mock_data_t;

mock_data_t mock0 = {
    .offset = 0xd000,
    .length = 16,
    .data = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
        0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f},
};

mock_data_t mock1 = {
    .offset = 0xd000,
    .length = 14,
    .data = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
        0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d},
};

mock_data_t mock2 = {
    .offset = 0xd000,
    .length = 12,
    .data = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
        0x28, 0x29, 0x2a, 0x2b},
};

mock_data_t mock3 = {
    .offset = 0xd000,
    .length = 10,
    .data = {
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
        0x38, 0x39},
};

// data address container {{{1
mock_data_t* mock_ptr[] = {
    &mock0, &mock1, &mock2, &mock3,
};

/** <!-- show {{{1 -->
 */
void show(mock_data_t* mock) {
    for (int i = 0; i < mock->length; i++) {
        printf("%02x ", *(mock->data + i));
    }
    printf("\n");
}

/** <!-- copy_object {{{1 -->
 */
void copy_object(int16_t idx) {
    mock_data_t mock;
    if (idx == 0) {
        mock = mock0;
    } else if (idx == 1) {
        mock = mock1;
    } else if (idx == 2) {
        mock = mock2;
    } else if (idx == 3) {
        mock = mock3;
    } else {
        return;
    }
    show(&mock);
}

/** <!-- copy_address {{{1 -->
 */
void copy_address(int16_t idx) {
    mock_data_t* mock;
    if (idx == 0) {
        mock = &mock0;
    } else if (idx == 1) {
        mock = &mock1;
    } else if (idx == 2) {
        mock = &mock2;
    } else if (idx == 3) {
        mock = &mock3;
    } else {
        return;
    }
    show(mock);
}

/** <!-- call_by_ptrarray {{{1 -->
 */
void call_by_ptrarray(int16_t idx) {
    mock_data_t* mock;
    mock = mock_ptr[idx];
    show(mock);
}

/** <!-- main {{{1 -->
 */
int main(void) {
    printf("===== copy_object =====\n");
    copy_object(0);
    copy_object(1);
    copy_object(2);
    copy_object(3);

    printf("===== copy_address =====\n");
    copy_address(0);
    copy_address(1);
    copy_address(2);
    copy_address(3);

    printf("===== call_by_ptrarray =====\n");
    call_by_ptrarray(0);
    call_by_ptrarray(1);
    call_by_ptrarray(2);
    call_by_ptrarray(3);

    return 0;
}

// end of file {{{1
// vim:ft=c:et:ts=4:nowrap:fdm=marker
