/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:26:01 by tgontier          #+#    #+#             */
/*   Updated: 2018/09/12 16:45:27 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a -= 32;
	return (a);
}