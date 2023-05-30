/*
** EPITECH PROJECT, 2022
** my str len
** File description:
** display len of string
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int end = 0;

    while (str[end] != '\0'){
        end += 1;
    }
    return end;
}
