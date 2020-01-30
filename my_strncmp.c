/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp
*/


int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;
    int k = 0;
    int res = 0;

    if (n > 0) {
        while (s1[i] != '\0' && s2[k] != '\0' && n > 0) {
            if (s1[i] != s2[k]) {
                res = s1[i] - s2[k];
                return (res);
            }
            i++;
            k++;
            n--;
        }
    }
    return (0);
}