/**
 * @Author ZhangGJ
 * @Date 2021/07/26 06:43
 */
#include <stdio.h>

int main(void) {
    char ch;

    while ((ch = getchar()) != '#') {
        putchar(ch);
    }
    return 0;
}
