/*
** EPITECH PROJECT, 2022
** my string n cat
** File description:
** concatenates n characters of src string
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int end = 0;
    int len1 = my_strlen(dest);

    if (nb == 0) {
        return (dest);
    }
    if (my_strlen(src) == 0) {
        return (dest);
    }
    while (end != nb) {
        dest[len1 + end] = src[end];
        end += 1;
    }
    dest[len1 + end] = '\0';
    return (dest);
}
