/*
** EPITECH PROJECT, 2022
** my put number
** File description:
** display number given
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long int nbr = nb;
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr / 10 > 0) {
        my_put_nbr(nbr / 10);
    }
    my_putchar(nbr % 10 + '0');
    return (0);
}
