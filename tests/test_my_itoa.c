/*
** EPITECH PROJECT, 2019
** test_my_itoa.c
** File description:
** test my itoa
*/

#include <criterion/criterion.h>

char *my_itoa(int nb);

Test(my_itoa, test_one)
{
    cr_assert_str_eq(my_itoa(12345), "12345");
}

Test(my_itoa, test_two)
{
    cr_assert_str_eq(my_itoa(-12345), "-12345");
}

Test(my_itoa, test_three)
{
    cr_assert_str_eq(my_itoa(0), "0");
}

Test(my_itoa, test_four)
{
    cr_assert_str_eq(my_itoa(-1), "-1");
}
