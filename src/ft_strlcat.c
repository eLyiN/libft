
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t count_0;
    size_t count_1;
    size_t i;


    i = 0;
    count_0 = 0;
    count_1 = 0;
    while(dst[count_0])
    {
        count_0++;
    }
    while(src[count_1])
        count_1++;
    if (size < count_1)
    {
        return (count_1 + size);
    }
    else
    {
        while (src[i])
        {
            dst[count_0] = src[i];
            count_0++;
            i++;
        }
    dst[count_0] = '\0';
    return(count_0);
    }
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <stddef.h>

int main()
{
    char origen[] = "Me llamo Earl";
    char desti[] = "Hola";

    printf("Este es el return value: %ld\n", strlcat(desti, origen, 20));
    printf("Asi queda el origen: %s\n", origen);
    printf("Asi queda el destino: %s\n", desti);
    printf("Este es el return value: %ld\n", ft_strlcat(desti, origen, 20));
    printf("Asi queda el origen: %s\n", origen);
    printf("Asi queda el destino: %s\n", desti);
}*/
