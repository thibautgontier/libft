/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:45:34 by tgontier          #+#    #+#             */
/*   Updated: 2018/11/05 09:29:23 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			j++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char		**ft_split(char **s, char *str, char c, size_t j)
{
	size_t	i;
	size_t	start;
	size_t	k;

	i = 0;
	start = 0;
	k = 0;
	while (str[i] && k < j)
	{
		if (str[i] != c)
		{
			start = i;
			while (str[i] != c && str[i])
				i++;
			s[k] = ft_strsub(str, start, i - start);
			k++;
		}
		else
			i++;
	}
	s[k] = NULL;
	return (s);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**s;
	size_t	k;

	if (!str)
		return (NULL);
	k = ft_words((char*)str, c);
	s = NULL;
	if ((s = (char**)malloc((k + 1) * sizeof(char*))) == NULL)
		return (NULL);
	if (!s)
		return (NULL);
	s = ft_split(s, (char*)str, c, k);
	return (s);
}
