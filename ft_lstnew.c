/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:43:04 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/02 19:30:37 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!(node = malloc(sizeof(t_list))))
	{
		return (NULL);
	}
	if (!content)
	{
		node->content = NULL;
	}
	node->content = content;
	node->next = NULL;
	return (node);
}
