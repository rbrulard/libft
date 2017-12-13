/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:48:18 by rbrulard          #+#    #+#             */
/*   Updated: 2017/12/13 15:53:37 by rbrulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 1)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	n;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (i > j)
	{
		n = str[i];
		str[i] = str[j];
		str[j] = n;
		i--;
		j++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	int		l;
	char	*s;

	l = ft_len(n) + 1;
	i = 0;
	if (!(s = (char*)malloc(sizeof(char) * l)))
		return (NULL);
	s[l] = '\0';
	l--;
	while (l > 0)
	{
		s[l] = n % 10 + '0';
		ft_putchar(s[l]);
		n = n / 10;
		l--;
	}
	if (n < 0)
		s[l] = '-';
	ft_strrev(s);
	return (s);
}
