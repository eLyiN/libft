/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:11:12 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/21 19:18:09 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest_temp;
	char *src_temp;
	size_t i;

	i = 0;
	dest_temp = (char *)dest;
	src_temp = (char *)src;

	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}
