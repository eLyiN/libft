/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:46:00 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/01 21:46:42 by aarribas         ###   ########.fr       */
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