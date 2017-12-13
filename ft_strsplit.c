/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:44:48 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/13 16:31:39 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(const char *str, char c)
{
	int len;
	int nb_word;

	len = 0;
	nb_word = 0;
	while (str[len])
	{
		if (str[len] == c)
		{
			nb_word++;
			while (str[len] == c)
				len++;
		}
		else
			len++;
	}
	return (nb_word);
}

char	**ft_malloc_case(const char *str, char c)
{
	int		i;
	int		len;
	int		size_word;
	char	**tabtemp;

	i = 0;
	len = 0;
	if (!(tabtemp = (char**)malloc(sizeof(char*) * ft_count_word(str, c) + 1)))
		return (NULL);
	tabtemp[ft_count_word(str, c)] = NULL;
	while (str[len])
		if ((str[len] > 31 && str[len] < 127) && str[len] != c)
		{
			size_word = 0;
			while ((str[len] > 31 && str[len++] < 127) && str[len] != c)
				size_word++;
			if (!(tabtemp[i] = (char*)malloc(sizeof(char) * size_word + 1)))
				return (NULL);
			tabtemp[i++][size_word] = 0;
		}
		else
			len++;
	return (tabtemp);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tabfinal;
	int		i;
	int		len;
	int		j;

	i = 0;
	len = 0;
	if (!(tabfinal = ft_malloc_case(s, c)))
		return (NULL);
	while (s[len])
	{
		if ((s[len] > 31 && s[len] < 127) && s[len] != c)
		{
			j = 0;
			while ((s[len] > 31 && s[len++] < 127) && s[len] != c)
			{
				tabfinal[i][j] = s[len++];
				j++;
			}
			i++;
		}
		else
			len++;
	}
	return (tabfinal);
}
