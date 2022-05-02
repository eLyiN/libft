/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:27:52 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/02 19:33:55 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*big_r;
	char	*little_r;

	big_r = (char *)big;
	little_r = (char *)little;
	i = 0;
	if (little_r[0] == '\0')
	{
		return (big_r);
	}
	while (*big_r && i < len)
	{
		if (*big_r == *little_r)
		{
			if (ft_strncmp(big_r, little_r, ft_strlen(little_r)) == 0)
				return (big_r);
			else
				return (NULL);
		}
		i++;
		big_r++;
	}
	return (NULL);
}
