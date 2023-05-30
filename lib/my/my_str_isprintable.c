/*
** EPITECH PROJECT, 2022
** my str is printable
** File description:
** return 1 if string contains only printable character and 0 otherwise
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    int nbrofprint = 0;
    if (len == 0) {
        return 1;
    }
    while (i != len) {
        if (str[i] >= 32 && str[i] <= '~') {
            nbrofprint += 1;
        }
        i += 1;
    }
    if (nbrofprint == len) {
        return 1;
    }
    return 0;
}
