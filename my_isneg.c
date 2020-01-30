/*
** EPITECH PROJECT, 2019
** my_isneg.c
** File description:
** No file there, just an epitech header example
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    }
    if (n < 0) {
        my_putchar('N');
    }
}
