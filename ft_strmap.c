/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:37:38 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/27 11:30:33 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*ret;
	size_t	len;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	ret = ft_memalloc(len + 1);
	if (ret == NULL)
		return (0);
	while (*s)
	{
		ret[i++] = f(*s);
		s++;
	}
	return (ret);
}
