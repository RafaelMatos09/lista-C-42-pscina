/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:23:13 by rafmorei          #+#    #+#             */
/*   Updated: 2023/09/01 12:31:01 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int num1;
    int num2;

    num1 = 10;
    num2 = 20;

    ft_swap(&num1, &num2);
    printf("%d\n", num1);
    return (0);
}
