/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:31:00 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 16:15:10 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    char *point;
    int count;

    point = (char *)str;
    count = 0;

    while(point[count])
    {
        count++;
    }
    while(point[count] >= 0)
    {
        if(point[count] == (char)c)
        {
            return(point + count);
        }
        count--;
    }
    return(NULL);
}
/*
int main()
{
    const char test[] = "Esto es una prueba";
    int a = 'p';

    printf("%s\n", ft_strrchr(test, a));
}*/