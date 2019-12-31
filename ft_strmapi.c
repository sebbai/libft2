/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:56:58 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 16:00:52 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	if (!s || !f || !(map = ft_strnew(ft_strlen(s))))
		return (0);
	while (s[i])
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	return (map);
}
