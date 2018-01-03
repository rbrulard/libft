/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:07:37 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/13 16:10:50 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int j;

	j = ft_strlen(s);
	i = 0;
	if (c == 0)
		return ((char*)s + j);
	while (s[i])
	{
		if ((char)s[i] != ((unsigned char)c))
			i++;
		else
			return ((char*)s + i);
	}
	return (NULL);
}
