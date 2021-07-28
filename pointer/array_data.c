/**
 * @Author ZhangGJ
 * @Date 2021/07/28 06:52
 */
#include <stdio.h>

void add_to(double ar[], int n, double val);

int main(void) {
    double ar[] = {1.0, 2.0, 3.0, 4.0};
    add_to(ar, 4, 1);
    printf("123");
}

void add_to(double ar[], int n, double val) {
    int i;
    for (i = 0; i < n; i++) {
        ar[i] += val;
    }
}
