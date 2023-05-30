/*
** EPITECH PROJECT, 2022
** my str is upper
** File description:
** return 1 if string only contains uppercase alphabetical and 0 otherwise
*/

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    int nbrofupper = 0;
    if (len == 0) {
        return 1;
    }
    while (i != len) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            nbrofupper += 1;
        }
        i += 1;
    }
    if (nbrofupper == len) {
        return 1;
    }
    return 0;
}
