/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:21:35 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 22:29:26 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    i = 0;
    while(s1[i] == s2[i] && (i < (n - 1)) && s1[i] && s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}
/*
int main()
{
    const char a[] = "co";
    const char b[] = "co";
    printf("%d\n", ft_strncmp(a, b, 2));
    printf("%d\n", strncmp(a, b, 2));
}*/