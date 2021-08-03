/**
 * @Author ZhangGJ
 * @Date 2021/08/03 06:56
 */
#include <stdio.h>

int main(void) {
    const char *mesg = "Don't be a fool!";
    const char *copy;
    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
}
