/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:46:00 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 21:32:54 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c || *s == '\0')
		return ((char *)s);
		else
		{
			s++;
		}
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
int main()
{
	    char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
        char *d1 = strchr(src, '\0');
        char *d2 = ft_strchr(src, '\0');
		printf("%s", d1);
		printf("%s", d2);
}*/