/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** No file there , just an epitech header example
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr_error(char *c)
{
    write(2, c, my_strlen(c));
}
