/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:35:44 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 20:15:33 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    
    if(n == 0)
    return(0);

    while(i < n)
    {
        if(str1[i] != str2[i])
        {
            return(str1[i] - str2[i]);
        }
        i++;
    }
    return(0);
}
/*
int main()
{
    unsigned char *st1 = "This is america";
    unsigned char *st2 = "This is america";

    printf("Esta es tu función; %d\n", ft_memcmp(st1, st2, 5));
    printf("Esta es la original; %d\n", memcmp(st1, st2, 5));
}*/