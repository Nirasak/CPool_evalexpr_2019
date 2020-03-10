/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** find prime sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) == 0; nb++);
    return (nb);
}
