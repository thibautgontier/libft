/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 14:22:37 by tgontier          #+#    #+#             */
/*   Updated: 2019/03/22 13:04:11 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*read_it(const int fd, char *buff, int *c)
{
	char			tmp[BUFF_SIZE + 1];
	char			*str;

	*c = read(fd, tmp, BUFF_SIZE);
	str = buff;
	tmp[*c] = '\0';
	if (!(buff = ft_strjoin(buff, tmp)))
		return (NULL);
	ft_strdel(&str);
	return (buff);
}

int			clear_it(char **line, char **buff)
{
	if (!(*line = ft_strdup(*buff)))
		return (-1);
	ft_bzero(*buff, ft_strlen(*buff));
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		*buff = "";
	int				c;
	char			*str;

	c = 1;
	if (!line || fd < 0 || (buff[0] == '\0' && (!(buff = ft_strnew(0)))))
		return (-1);
	while (c > 0)
	{
		if ((str = ft_strchr(buff, '\n')) != NULL)
		{
			*str = '\0';
			if (!(*line = ft_strdup(buff)))
				return (-1);
			ft_memmove(buff, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		if (!(buff = read_it(fd, buff, &c)))
			return (-1);
	}
	ft_strdel(&str);
	if (c == 0 && ft_strlen(buff))
		c = clear_it(&(*line), &buff);
	return (c);
}
