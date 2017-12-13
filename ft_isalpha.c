/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:19:35 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/13 15:47:39 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 97 && (unsigned char)c <= 122)
			|| ((unsigned char)c >= 65 && (unsigned char)c <= 90))
		return (1);
	else
		return (0);
}
