/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:18:30 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/14 17:55:08 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	char	*res;

	res = (char *)str;
	while (*res != a)
	{
		if (*res == '\0')
			return (NULL);
		res++;
	}
	return (res);
}
