/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:56:41 by rafmorei          #+#    #+#             */
/*   Updated: 2023/09/01 12:21:47 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_pubnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_pubnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_pubnbr(nb);
    }
    else if (nb >= 10)
    {
        ft_pubnbr(nb / 10);
        ft_pubnbr(nb % 10);
    }
    else if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
}

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int a;
    a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    ft_ultimate_ft(&ptr8);
    ft_pubnbr(a);
    ft_putchar('\n');
    return (0);
}