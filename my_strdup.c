/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** duplique une string
*/

#include <stdlib.h>

char *my_strdup(const char *s)
{
    int  i = 0;
    int lens = my_strlen(s);
    char *str = malloc(lens);

    while (s[i] != '\0') {
        str[i] = s[i];
        i++;
    }
    return (str);
}