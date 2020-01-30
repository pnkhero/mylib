/*
** EPITECH PROJECT, 2020
** put_to_lowcase
** File description:
** put_to_lowcase
*/

void put_to_lowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
    my_putstr(str);
}

/*int main(int ac, char **av)
{
    char str[7] = "ABCDEF";

    put_to_lowcase(str);
}*/