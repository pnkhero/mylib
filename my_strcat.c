/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** concat 2 string
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);
int my_putstr(char const *str);

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*int main(void)
{
    char *dest = malloc(lendest + lensrc);
    dest = "hello";
    char *src = "world";
    int lendest  = my_strlen(dest);
    int lensrc = my_strlen(src);

    dest = malloc(lendest + lensrc);

    dest = my_strcat(dest, src);
    my_putstr(dest);
}*/