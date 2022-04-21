/* La funcion de bzero escribe cero bites (aka '\0') en el string de s. Si el string no contiene longitud o el valor de n es igual a 0, la funcion no debería de realizar nada.*/

void    bzero(void *s, size_t n)
{
    if (n != 0)
    {
        ft_memset(s, '\0', n);
    }
}
