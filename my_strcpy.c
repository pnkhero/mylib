/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
**
*/

char *my_strcpypath(char *dest, char const *src)
{
    int count = 5;
    int count2 = 0;

    while (src[count] != '\0') {
        dest[count2] = src[count];
        count = count + 1;
        count2 = count2 + 1;
    }
    dest[count2] = '\0';
    return (dest);
}
