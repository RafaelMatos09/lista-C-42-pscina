/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:17:37 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/31 21:11:22 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_put_numbers(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
}

void ft_put_comma(void)
{
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';
    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                ft_put_numbers(a, b, c);

                if (a == '7' && b == '8' && c == '9')
                    break;

                ft_put_comma();
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
        c = b + 1;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}