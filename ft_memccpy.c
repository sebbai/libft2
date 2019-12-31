/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:03:25 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/28 18:57:00 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*temp_dest;
	char			*temp_src;
	unsigned int	i;

	i = 0;
	temp_dest = (char*)dest;
	temp_src = (char*)src;
	while (i < n)
	{
		temp_dest[i] = (char)temp_src[i];
		if (temp_src[i] == (char)c)
			return (temp_dest + i + 1);
		i++;
	}
	return (NULL);
}
