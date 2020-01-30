/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** No file there , just an epitech header example
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
