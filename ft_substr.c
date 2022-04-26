/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:47:41 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 16:29:22 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t j;

    if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
    {
        return (NULL);
    }
    i = (size_t)start;
    j = 0;
    while(i < ft_strlen(s) && j < len)
    {
        str[j++] = s[i++];
    }
    str[j] = '\0';
    return (str);
}
/*
int main()
{
    const char *str = "Esto es una prueba";
    unsigned int i = 3;

    printf("%s", ft_substr(str, i, 8));
}*/