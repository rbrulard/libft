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

	i = 0;
	while (i < n)
	{
		if (((const char*)src)[i] != (unsigned char)c)
		{
			((char*)dst)[i] = ((const char*)src)[i];
			i++;
		}
		else
			return (dst);
	}
	return (dst);
}
