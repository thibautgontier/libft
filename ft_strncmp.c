/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 11:07:49 by tgontier          #+#    #+#             */
/*   Updated: 2018/11/05 14:51:17 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;
	size_t			i;

	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str[i] == str2[i] && str[i] && str2[i] && i < n - 1)
		i++;
	return ((unsigned char)str[i] - (unsigned char)str2[i]);
}
