/*
** EPITECH PROJECT, 2019
** test_my_do_op.c
** File description:
** test my do_op
*/

#include <criterion/criterion.h>

int do_op(int nbr1, int nbr2, char ope);

Test(do_op, test_one)
{
    cr_assert(do_op(10, 10, '+') == 20);
}

Test(do_op, test_two)
{
    cr_assert(do_op(10, 10, '-') == 0);
}

Test(do_op, test_three)
{
    cr_assert(do_op(10, 10, '*') == 100);
}

Test(do_op, test_four)
{
    cr_assert(do_op(10, 10, '/') == 1);
}

Test(do_op, test_five)
{
    cr_assert(do_op(10, 10, '%') == 0);
}

Test(do_op, test_six)
{
    cr_assert(do_op(10, 10, 'A') == 0);
}
