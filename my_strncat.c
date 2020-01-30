/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** cat n
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len = my_strlen(dest);

    while (i < nb && src[i]) {
            dest[len + i] = src[i];
            i = i + 1;
        }
        dest[len + i] = '\0';
        return (dest);
}
