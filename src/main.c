/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main evalexpr
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac > 2)
        return (84);
    return (eval_expr(av[1]));
}
