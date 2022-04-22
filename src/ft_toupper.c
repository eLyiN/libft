int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}
/*#include <stdio.h>
int main()
{
    int i;

    i = 121;

    printf("%c", ft_toupper(i));
}*/
