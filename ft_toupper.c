/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:45:34 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/23 16:46:46 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}
/*#include <stdio.h>
int main()
{
    int i;

    i = 121;

    printf("%c", ft_toupper(i));
}*/
