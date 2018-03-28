#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return 1;
    }
    printf("\x1b[30;42m========= Compile %s ==========\x1b[0m\n", argv[1]);
    return 0;
}
