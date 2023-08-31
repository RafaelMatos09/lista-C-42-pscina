/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:50:56 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/31 13:51:13 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char alphabet;

    alphabet = 122;

    while (alphabet >= 97)
    {
        write(1, &alphabet, 1);
        alphabet--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}