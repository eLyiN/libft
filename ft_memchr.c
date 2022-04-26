/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:03:14 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 21:58:42 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *point;
    size_t i;

    i = 0;
    point = (unsigned char *)str;

    while(i < n)
    {
        if(point[i] == (unsigned char)c)
        {
            return(point + i);
        }
        i++;
    }
    return(NULL);
}

int main()
{
    unsigned char src[] = "/|\x12\xff\x09\0\x42\042\0\42|\\";
    int h = '\0';

    printf("%p\n", ft_memchr(src, h, 12));
    printf("%p\n", memchr(src, h, 12));
}