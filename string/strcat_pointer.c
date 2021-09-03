/**
 * @Author ZhangGJ
 * @Date 2021/09/03 17:20
 */

#include<stdio.h>
#include<string.h>

void Pointer_stringcat(char *str1, const char *str2)
{
    while (*(str1++) != '\0');     //一直将指向str1的指针移到字符串的末尾
    str1--;
    while (*str2 != '\0')
    {
        *(str1++) = *(str2++);  //开始连接
    }
    *str1 = '\0';               //连接完后,添加上字符串结束标识符
}

int main(int argc, const char *argv[])
{
    char s1[] = "hello ";     //这个是一个字符串变量,字符串的值可以被修改
    char *s2 = "world!";      //这个是一个字符串常量,不能更改字符串的值
    char const *pt = s1;       //始终不改变pt的指向,pt一直指向s1的首地址
    Pointer_stringcat(s1, s2);  //调用自定义的字符串连接函数
    puts(pt);
    return 0;
}