/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swap
*/

void my_swap(int *a, int *b)
{
    int stock = *a;

    *a = *b;
    *b = stock;
}
