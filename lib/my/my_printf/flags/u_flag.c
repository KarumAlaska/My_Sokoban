/*
** EPITECH PROJECT, 2022
** u_flag
** File description:
** display number given
*/

#include "../../lib.h"

int u_flag(long int nb)
{
    if (nb < 0) {
        return 84;
    }
    if (nb / 10 > 0) {
        u_flag(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return 0;
}
