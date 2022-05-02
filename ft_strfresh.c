/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfresh.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:12:48 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/02 19:32:00 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfresh(const char *str)
{
	char	*fresh;

	if (str)
	{
		if (!(fresh = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1))))
		{
			return (NULL);
		}
		ft_memset(fresh, '\0', (ft_strlen(str) + 1));
		return (fresh);
	}
	return (NULL);
}
