/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:21:35 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/24 11:00:45 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;

    i = 0;
    while(str1[i] == str2[i] && (i < ((int)n - 1)))
    {
        i++;
    }
    return(str1[i] - str2[i]);
}
/*
int main()
{
    const char a[] = "co";
    const char b[] = "co";
    printf("%d\n", ft_strncmp(a, b, 2));
    printf("%d\n", strncmp(a, b, 2));
}*/