/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 13:59:00 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/13 16:22:31 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			new[i] = f(s[i]);
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
