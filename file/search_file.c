/**
 * @Author ZhangGJ
 * @Date 2021/09/03 15:16
 */
#include <stdio.h>

#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>

char *search_directory(char *target_file, char *file_dir, unsigned long file_dir_length);

unsigned int str_length(const char *str);

int main(void)
{
    char ss[100] = "/Users/zhanggj/Downloads/clion-projects/multilingual-data-structure-algorithm";
    char *directory_url = search_directory("array", ss, str_length(ss));
    printf("Url: %s\n", directory_url);
    return 0;
}

char *search_directory(char *target_file, char *file_dir, unsigned long file_dir_length)
{
    struct dirent *ptr;
    struct stat st;
    DIR *dir = opendir(file_dir);
    while (dir != NULL && (ptr = readdir(dir)) != NULL)
    {
        char *ptr_name = ptr->d_name;
        if (strcmp(ptr_name, ".") == 0 || strcmp(ptr_name, "..") == 0)
        {
            continue;
        }
        char url[100];
        strcpy(url, file_dir);
        char *last_char = file_dir + (file_dir_length - 1);
        if (strcmp(last_char, "/") != 0)
        {
            strcat(url, "/");
        }
        strcat(url, ptr_name);
        stat(url, &st);
        if (!S_ISDIR(st.st_mode))
        {
            continue;
        }
        printf("d_name : %s\n", ptr_name);
        if (strcmp(ptr_name, target_file) == 0)
        {
            return url;
        }
        else
        {
            char *result = search_directory(target_file, url, strlen(url));
            if (result == NULL)
            {
                continue;
            }
            else
            {
                return result;
            }
        }
    }
    if (dir != NULL)
    {
        closedir(dir);
    }
    return NULL;
}

unsigned int str_length(const char *str)
{
    const char *start = str;
    while (*str)
    {
        str++;
    }
    return str - start;
}


