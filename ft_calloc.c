/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:48:54 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 11:55:02 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *ptr;

    ptr = malloc(nitems * size);
    if(ptr == NULL)
    {
        return(ptr);
    }
    ft_bzero(ptr, nitems * size);
    return (ptr);
}
/*
int main()
{
    printf("%lld %lld", calloc(4, sizeof(int)), ft_calloc(4, (sizeof(int))));
    return (0);
}*/