/*
** EPITECH PROJECT, 2020
** upcase
** File description:
** put_to_upcase
*/

void put_to_upcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' || str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }
    my_putstr(str);
}

/*int main(int ac, char **av)
{
    char str[7] = "abcdef";

    put_to_upcase(str);
}*/