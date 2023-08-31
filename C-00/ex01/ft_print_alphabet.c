/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:46:08 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/31 13:47:01 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{

    char alphabet;

    alphabet = 97;

    while (alphabet <= 122)
    {
        write(1, &alphabet, 1);
        alphabet++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}