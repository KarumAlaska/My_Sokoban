/*
** EPITECH PROJECT, 2022
** my compute square root
** File description:
** return the square root of a given number
*/

int my_compute_square_root(int nb)
{
    int nb2 = 1;
    if (nb == 0){
        return (0);
    }
    if (nb == 1){
        return (1);
    }
    while (nb2 * nb2 <= nb){
        if (nb == nb2 * nb2){
            return (nb2);
        }
        if (nb < nb2 * nb2){
            return (0);
        }
        nb2 += 1;
    }
    return (0);
}
