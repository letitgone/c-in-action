/**
 * @Author ZhangGJ
 * @Date 2021/07/26 06:30
 */
#include <stdio.h>

int main(void) {
    int choice = 3;
    switch (choice) {
        case 1:
            printf("1\n");
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
        case 4:
            printf("4\n");
            break;
        default:
            printf("default\n");
    }
    return 0;
}
