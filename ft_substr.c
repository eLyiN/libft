/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:47:41 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/14 14:39:56 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		i = (size_t)start;
		j = 0;
		while (i < ft_strlen(s) && j < len)
		{
			str[j++] = s[i++];
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
