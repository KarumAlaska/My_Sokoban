/*
** EPITECH PROJECT, 2022
** my string copy
** File description:
** copy a string in another
*/

char *my_strcpy(char *dest, char const *src)
{
    int len = 0;
    while (src[len] != '\0') {
        dest[len] = src[len];
        len += 1;
    }
    dest[len] = '\0';
    return (dest);
}
