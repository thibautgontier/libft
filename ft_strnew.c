/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:45:43 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/27 11:16:12 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	str = (char*)malloc((size + 1) * sizeof(char));
	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
