#include <stddef.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
