/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** compute power rec
*/

int my_compute_power_rec(int nb, int p)
{
    int total;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p > 0)
        total = nb * my_compute_power_rec(nb, p - 1);
    return (total);
}
