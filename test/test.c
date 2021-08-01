/**
 * @Author ZhangGJ
 * @Date 2021/08/02 07:29
 */

#include <stdio.h>

int main(void) {
    int m = 3;
    int n = 5;
    int *p1 = &m;
    int *p2 = &n;
    *p2 = *p1;
    printf("*p1= %p, *p2= %p\n", *p1, *p2);
}
