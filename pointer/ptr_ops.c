/**
 * @Author ZhangGJ
 * @Date 2021/07/27 08:04
 */
#include <stdio.h>

int main(void) {
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("Pointer value, dereference pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // 指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
    ptr1++;

    return 0;
}
