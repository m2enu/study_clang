#include <stdio.h>

/** <!-- func_ptr {{{1 -->
 */
typedef void (*func_ptr)(const char *);

/** <!-- callback1 {{{1 -->
 */
void callback1(const char *s) {
    printf("(%s)\n", s);
}

/** <!-- callback2 {{{1 -->
 */
void callback2(const char *s) {
    printf("[%s]\n", s);
}

/** <!-- func {{{1 -->
 */
void func(const char *s, func_ptr p) {
    p(s);
}

/** <!-- main {{{1 -->
 */
int main(void) {
    func("callback1", &callback1);
    func("callback2", &callback2);
    return 0;
}

// end of file {{{1
// vim:ft=c:et:nowrap:fdm=marker
