/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:42:03 by rbrulard          #+#    #+#             */
/*   Updated: 2018/01/05 13:29:37 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			ft_check(const char *s)
{
	int				i;
	int				count;

	count = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			count++;
		else
			count = 0;
		i++;
	}
	return (count);
}

char				*ft_strtrim(char const *s)
{
	int			i;
	int			start;
	int			len;
	char		*trim;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	len = ft_strlen(s) - (i + ft_check(s));
	if (!(trim = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i])
	{
		trim[start++] = s[i++];
	}
	start = start - ft_check(s);
	trim[start] = '\0';
	return (trim);
}
