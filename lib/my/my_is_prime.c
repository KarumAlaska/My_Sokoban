/*
** EPITECH PROJECT, 2022
** my is prime
** File description:
** return 1 if number is prime and 0 if not
*/

int my_compute_square_root(int nb);

int my_is_prime(int nb)
{
    int prime = my_compute_square_root(nb);

    if (nb == 0 || nb == 1){
        return (0);
    }
    if (nb == 2){
        return (1);
    }
    while (prime != 1){
        if (nb % prime == 0){
            return (0);
        }
        prime -= 1;
    }
    return (1);
}
