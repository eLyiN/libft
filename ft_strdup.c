/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:47:17 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 16:12:29 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *str;

    if(!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
    {
        return (NULL);
    }

    ft_strlcpy(str, s, (ft_strlen(s) + 1));
    return (str);
}
/*
int main()
{
    const char str1[] = "TASKL";
    char *str2 = ft_strdup(str1);

    printf("%p\n", str1);
    printf("%p\n", str2);
    printf("%s", ft_strdup(str1));
    printf("%s", strdup(str1));

}*/