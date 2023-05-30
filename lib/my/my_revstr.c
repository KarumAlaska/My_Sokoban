/*
** EPITECH PROJECT, 2022
** my reverse string
** File description:
** reverse a string
*/

void my_putchar(char c);

char *my_revstr(char *str)
{
    int start = 0;
    int end = 0;
    int middle = 0;
    char temp;

    while (str[end] != '\0'){
        end += 1;
    }
    end -= 1;
    middle = end / 2;
    while (start < middle) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start += 1;
        end -= 1;
    }
    return (str);
}
