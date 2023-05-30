/*
** EPITECH PROJECT, 2022
** my string n copy
** File description:
** copies n characters from a string into another
*/

int str_len(char const *src)
{
    int end = 0;

    while (src[end] != '\0') {
        end += 1;
    }
    return (end);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int end = 0;
    while (end != n) {
        dest[end] = src[end];
        end += 1;
        if (n == str_len(src)) {
            dest[n] = '\0';
            return (dest);
        }
    }
    return (dest);
}
