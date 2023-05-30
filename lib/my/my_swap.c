/*
** EPITECH PROJECT, 2022
** my swap
** File description:
** swap two int
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
