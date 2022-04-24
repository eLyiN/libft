/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:03:14 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/24 15:35:26 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *point;
    size_t i;

    i = 0;
    point = (unsigned char *)str;

    while(point[i] && i < n)
    {
        if(point[i] == (unsigned char)c)
        {
            return(point + i);
        }
        i++;
    }
    return(NULL);
}
/*
int main()
{
    unsigned char src[] = "This is america";
    int h = 'a';

    printf("%s\n", ft_memchr(src, h, 15));
    printf("%s\n", memchr(src, h, 15));
}*/