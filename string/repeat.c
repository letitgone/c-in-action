/**
 * gcc repeat.c
 * a.out Resistance is futile
 *
 * @Author ZhangGJ
 * @Date 2021/08/04 07:19
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++) {
        printf("%d: %s\n", count, argv[count]);
    }
    printf("\n");
    return 0;
}
