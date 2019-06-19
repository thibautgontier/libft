/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 10:55:15 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/23 10:56:25 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dest;
	size_t	i;

	if (src == dst)
		return (dst);
	src1 = (char *)src;
	dest = (char *)dst;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dest[i] = src1[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
