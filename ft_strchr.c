/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:46:00 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/23 19:46:11 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0' || *s == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		else
		{
			s++;
		}
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char *test = "Hola que dice";
	int a = 'f';

	printf("%s\n", ft_strchr(test, a));
}*/