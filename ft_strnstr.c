/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:27:52 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 16:13:53 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    char *big_r;
    char *little_r;

    big_r = (char *)big;
    little_r = (char *)little;
    i = 0;

    if(little_r[0] == '\0')
    {
        return(big_r);
    }
    while(big_r[i] && i < len)
    {
        j = 0;
        if (big_r[i] == little_r[0])
        {
            while(big_r[i + j] == little_r[j] && (i + j) < len)
            {
                j++;
                if(little_r[j + 1] != big_r[i + j + 1])
                    return(big_r + i);
            }
        }
        i++;
    
    }
    return(NULL);
}
/*
int main()
{
    const char largestring[] = "Hola que tal maestro?";
    const char smallstring[] = "x";
    size_t n = 10;

    printf("%s\n", ft_strnstr(largestring, smallstring, n));
}*/