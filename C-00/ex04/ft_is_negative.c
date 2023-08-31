/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:10:09 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/31 14:11:22 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
    {
        write(1, &"N", 1);
    }
    else
    {
        write(1, &"P", 1);
    }
}

int main(void)
{
    ft_is_negative(-1);
    return (0);
}