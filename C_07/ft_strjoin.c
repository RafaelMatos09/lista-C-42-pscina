/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:05:02 by rafmorei          #+#    #+#             */
/*   Updated: 2023/10/12 22:05:02 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *str)
{
    char *src;
    int lenght = ft_strlen(str);
    int i;

    src = (char *)malloc((lenght + 1) * sizeof(char));
    i = 0;
    if (src)
    {
        while (i < lenght)
        {
            src[i] = str[i];
        }
        src[lenght] = '\0';
    }

    return (src);
}

char *ft_strjoin(char *s1, char *s2, char *sep)
{
    unsigned index;
    unsigned all_size;
    char *result;

    if (!s1 && !s2)
    {
        if (s1)
        {
            return (ft_strdup(s1));
        }
        else if (s2)
        {
            return (ft_strdup(s2));
        }
        else
        {
            return (ft_strdup(""));
        }
    }

    all_size = ft_strlen(s1) + ft_strlen(s2);
    result = (char *)malloc((all_size + 1) * sizeof(char));
    if (!result)
        return (result);

    index = 0;
    while (*s1)
    {
        result[index++] = *s1;
        s1++;
    }
    while (*sep)
    {
        result[index++] = *sep;
        sep++;
    }
    while (*s2)
    {
        result[index++] = *s2;
        s2++;
    }

    result[index] = '\0';
    return (result);
}

int main()
{
    char *str_prefix = "itk";
    char *str_suffix = "sonraki";
    char *sep = "#";
    printf("%s\n", ft_strjoin(str_prefix, str_suffix, sep));
    return (0);
}