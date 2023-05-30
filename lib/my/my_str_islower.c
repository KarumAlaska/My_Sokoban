/*
** EPITECH PROJECT, 2022
** my str is lower
** File description:
** return 1 if string only contains lowercase alphabetical and 0 otherwise
*/

int my_strlen(char const *str);

int my_str_islower(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    int nbroflower = 0;
    if (len == 0) {
        return 1;
    }
    while (i != len) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            nbroflower += 1;
        }
        i += 1;
    }
    if (nbroflower == len) {
        return 1;
    }
    return 0;
}
