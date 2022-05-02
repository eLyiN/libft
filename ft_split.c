/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:06:13 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/02 19:27:59 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countsubstr(const char *str, char c)
{
	int	i;
	int	substr;
	int	in_word;

	i = 0;
	substr = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			in_word = 0;
		}
		else
		{
			if (in_word == 0)
			{
				in_word = 1;
				substr++;
			}
			i++;
		}
	}
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_sub;
	char	*new_str;
	int		substr;
	int		i;
	int		j;
	int		k;
	int		len;

	if (s)
	{
		substr = ft_countsubstr(s, c);
		if (!(arr_sub = (char **)malloc(sizeof(char *) * (substr + 1))))
		{
			return (NULL);
		}
		i = 0;
		j = 0;
		if ((new_str = ft_strdup(s)))
		{
			while (new_str[i])
			{
				if (new_str[i] != c)
				{
					len = 0;
					k = i;
					while (new_str[i] != c && new_str[i] != '\0')
					{
						len++;
						i++;
					}
					arr_sub[j] = ft_substr(new_str, (unsigned int)k, len);
					j++;
				}
				else
					i++;
			}
		}
		arr_sub[j] = NULL;
		return (arr_sub);
	}
	return (NULL);
}
