/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 09:39:52 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/23 10:55:02 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	j;

	len = 0;
	i = 0;
	if (dstsize == 0)
		return (0);
	while (src[len])
		len++;
	while (dst[i] && i < dstsize)
		i++;
	j = i;
	while (src[i - j] && i < dstsize - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < dstsize)
		dst[i] = '\0';
	return (j + len);
}
