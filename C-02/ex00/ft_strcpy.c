#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

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

int main(void)
{
    char src[] = "testando!";
    int num_char = ft_strlen(src);
    char destino[num_char];
    ft_strcpy(destino, src);
    printf("%s\n", destino);
}