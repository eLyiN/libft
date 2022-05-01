/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:36:43 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/01 21:41:48 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if(lst)
    {
        if(*lst == NULL)
        {
            del(*lst);
            *lst = NULL;
        }
        while(*lst != NULL)
        {
            temp = (*lst)->next;
            ft_lstdelone(*lst, del);
            (*lst) = temp;
        }   
    }
}