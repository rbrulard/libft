/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:28:21 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/14 15:56:18 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	size_t i;
	unsigned char b;
	unsigned char *source;
	unsigned char *desti;

	i = 0;
	source = (unsigned char *)src;
	desti = (unsigned char *)dst;
	b = (unsigned char)c;
	while (i < n)
	{
		desti[i] = source[i];
		if (source[i] == b)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
