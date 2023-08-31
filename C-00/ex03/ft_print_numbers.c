/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:58:36 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/31 14:00:43 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    int print_numbers;

    print_numbers = '0';

    while (print_numbers <= '9')
    {
        write(1, &print_numbers, 1);
        print_numbers++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}