/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** No file there, just an epitech header example
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int i = 0;

    i = *a;
    *a = *b;
    *b = i;
}
