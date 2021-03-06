/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:24:45 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 15:15:21 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while ((str[i] != '\0') && (i < len))
	{
		j = 0;
		while ((to_find[j] == str[i + j]) && (i + j < len))
		{
			if (!(to_find[j + 1]))
				return ((char*)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
