/*
** EPITECH PROJECT, 2022
** my str is num
** File description:
** return 1 if string contains only digits and 0 otherwise
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    int nbrofdigit = 0;
    if (len == 0) {
        return 1;
    }
    while (i != len) {
        if (str[i] >= '0' && str[i] <= '9') {
            nbrofdigit += 1;
        }
        i += 1;
    }
    if (nbrofdigit == len) {
        return 1;
    }
    return 0;
}
