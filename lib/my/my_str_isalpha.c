/*
** EPITECH PROJECT, 2022
** my str is alpha
** File description:
** return 1 if the string is only alphabetical characters and 0 if not
*/

int my_strlen(char const *str);

int my_str_isalpha(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    int nbrofalpha = 0;
    if (len == 0) {
        return 1;
    }
    while (i != len) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            nbrofalpha += 1;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            nbrofalpha += 1;
        }
        i += 1;
    }
    if (nbrofalpha == len) {
        return 1;
    }
    return 0;
}
