#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 31 || str[i] >= 127)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char src = '\n';
    printf("%d", ft_str_is_printable(&src));
}