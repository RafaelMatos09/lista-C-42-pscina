/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:19:36 by rafmorei          #+#    #+#             */
/*   Updated: 2023/09/01 14:28:51 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

int main(void)
{
    int a = 10;
    int b = 20;

    ft_ultimate_div_mod(&a, &b);
    printf("%d %d \n", a, b);
    return (0);
}