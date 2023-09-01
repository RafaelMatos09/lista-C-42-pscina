/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:57:02 by rafmorei          #+#    #+#             */
/*   Updated: 2023/09/01 15:32:43 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
}

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int element;

    i = 0;
    while (i < size / 2)
    {
        element = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = element;
        i++;
    }
}
int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i;

    i = 0;
    ft_rev_int_tab(array, 8);
    while (i < 8)
    {
        ft_putnbr(array[i]);
        i++;
    }
}