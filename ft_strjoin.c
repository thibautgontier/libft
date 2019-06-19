/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:14:03 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/29 16:14:20 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;

	dst = NULL;
	if (s1 && s2)
	{
		dst = (char *)malloc(sizeof(char) \
		* (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
		if (!dst)
			return (NULL);
		ft_strcpy(dst, s1);
		ft_strcat(dst, s2);
	}
	return (dst);
}
