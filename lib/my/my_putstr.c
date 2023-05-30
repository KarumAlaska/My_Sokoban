/*
** EPITECH PROJECT, 2022
** my put string
** File description:
** display each char. of a string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int end = 0;
    while (str[end] != '\0'){
        my_putchar(str[end]);
        end += 1;
    }
    return (0);
}
