/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:47:41 by aarribas          #+#    #+#             */
/*   Updated: 2022/04/25 15:06:45 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
    char *source;

    source = (char *)src;
	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size < 1)
		return (j);
	else
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = source[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (j);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strrchr(const char *str, int c)
{
    char *point;
    int count;

    point = (char *)str;
    count = 0;

    while(point[count])
    {
        count++;
    }
    while(point[count] >= 0)
    {
        if(point[count] == (char)c)
        {
            return(point + count);
        }
        count--;
    }
    return(NULL);
}

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t j;

    if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
    {
        return (NULL);
    }
    i = (size_t)start;
    j = 0;
    while(i < ft_strlen(s) && j < len)
    {
        str[j++] = s[i++];
    }
    str[j] = '\0';
    return (str);
}

int main()
{
    const char *str = "Esto es una prueba";
    unsigned int i = 3;

    printf("%s", ft_substr(str, i, 8));
}