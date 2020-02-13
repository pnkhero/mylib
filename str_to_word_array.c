/*
** EPITECH PROJECT, 2020
** my_para
** File description:
** my_word_para
*/

#include "./include/struct.h"

int my_count_word(char *str, char c)
{
    int		i = 0;
    int		cmp = 1;

    while (str[i] != '\0') {
        if (str[i] == c && str[i - 1] != c)
            cmp++;
        i++;
    }
    return (cmp);
}

int my_strlen_word(char *str, char c, int i)
{
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            return (j);
        j++;
        i++;
    }
    return (j);
}

char **str_to_wordarray(char *str, char space, struct word *w)
{
    int y = 0;
    int x = 0;
    int pos_str = 0;
    char **tab;

    w->len_word = my_strlen_word(str, space, pos_str);
    w->count_word = my_count_word(str, space);
    tab = malloc(sizeof(char *) * (w->count_word + 1));

    while (y < w->count_word) {
        tab[y] = malloc(sizeof(char) * (w->len_word + 1));
        while (x < w->len_word) {
            tab[y][x] = str[pos_str];
            pos_str++;
            x++;
        }
        pos_str++;
        w->len_word = my_strlen_word(str, space , pos_str);
        tab[y][x] = '\0';
        x = 0;
        y++;
    }
    tab[w->count_word] = NULL;
    return (tab);
}