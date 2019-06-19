/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:36:36 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/24 15:36:52 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		neg;
	int		tmp;
	char	*buf;

	neg = 0;
	if (n < 0)
		neg = 1;
	tmp = n;
	size = 1;
	while ((tmp /= 10))
		size++;
	buf = ft_strnew(size + neg);
	if (buf == NULL)
		return (NULL);
	if (neg)
		buf[0] = '-';
	while (size--)
	{
		buf[size + neg] = (neg ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (buf);
}
