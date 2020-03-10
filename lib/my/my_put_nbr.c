/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** put nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int stock = 0;

    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_putchar('2');
            nb = nb + 2000000000;
        }
        nb = -nb;
    }
    if (nb == 10)
        my_putchar('1');
    stock = nb % 10;
    if (nb > 10)
        my_put_nbr(nb / 10);
    my_putchar(stock + 48);
    return (0);
}
