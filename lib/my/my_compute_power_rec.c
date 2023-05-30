/*
** EPITECH PROJECT, 2022
** my compute power rec
** File description:
** return a powered number with recursive
*/

int my_compute_power_rec(int nb, int p)
{
    long result = nb;
    if (p < 0) {
        return (0);
    }
    if (p == 0){
        return (1);
    }
    if (result <= 2147483647){
        if (result * result <= 2147483647) {
            return (my_compute_power_rec(result, p - 1) * result);
        }
    }
    return (0);
}
