/*
** EPITECH PROJECT, 2022
** my find prime superior
** File description:
** return the smallest prime number greater or equal to the one given
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb <= 2){
        return (2);
    }
    if (my_is_prime(nb) == 1){
        return (nb);
    } else {
        my_find_prime_sup(nb + 1);
    }
    return (0);
}
