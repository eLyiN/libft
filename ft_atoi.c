/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:50:32 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/26 15:52:25 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    char *str1;
    int i;
    int signo;
    int nbr;

    str1 = (char *)str;
    i = 0;
    signo = 1;
    nbr = 0;

    while(str1[i] == ' ' || str1[i] == '\f' || str1[i] == '\n' ||
    str1[i] == '\r' || str1[i] == '\t' || str1[i] == '\v')
    {
        i++;
    }
    while(str1[i] == '+' || str1[i] == '-')
    {
        if(str1[i] == '-')
        {
            signo = -1;
        }
        i++;
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    return(signo * nbr);
}