/*
** EPITECH PROJECT, 2022
** string cat
** File description:
** concatenates two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int end = 0;
    while (src[end] != '\0') {
        dest[len + end] = src[end];
        end += 1;
    }
    return (dest);
}
