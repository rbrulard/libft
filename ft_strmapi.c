/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:32:05 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/13 16:23:12 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	i = 0;
	if (!(new = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			new[i] = f(i, s[i]);
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
