/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 12:58:58 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/31 16:16:37 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	nbr;
	char	*ptr1;
	char	*ptr2;

	if (!*s2)
		return ((void *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			nbr = n;
			ptr1 = (void *)s1 + 1;
			ptr2 = (void *)s2 + 1;
			while (nbr-- && *ptr1 && *ptr2 && *ptr1 == *ptr2)
			{
				++ptr1;
				++ptr2;
			}
			if (!*ptr2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
