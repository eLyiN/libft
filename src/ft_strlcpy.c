/*#include <string.h>
#include <bsd/string.h>*/

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    while(src[j])
    {
        j++;
    }
    if (size < 1)
        return (j);
    else
        while (src[i] != '\0' && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
    dst[i] = '\0';
    return (j);
}
/*
#include <stdio.h>
int main()
{
    char destino[] = "s";
    char source[] = "";

    printf("Esto es mi funcion: %ld\n", ft_strlcpy(destino, source, 9));
    printf("Esto es mi funcion el dest: %s\n", destino);

    printf("Esta es la original: %ld\n", strlcpy(destino, source, 9));
    printf("Esta es la original y el dest: %s\n", destino);
 
}*/
