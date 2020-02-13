/*
** EPITECH PROJECT, 2020
** print and free a tab
** File description:
** print_and_free_tab
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void printab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i = i + 1) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

void free_tab(char **tab)
{
    for (int i = 0; tab[i]; i++) {
		free(tab[i]);
		tab[i] = NULL;
	}
	free(tab);
	tab = NULL;
}
