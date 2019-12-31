/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:03:39 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/28 18:55:31 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*temp_dest;
	char			*temp_src;

	if (dest == src)
		return (dest);
	i = 0;
	temp_dest = (char*)dest;
	temp_src = (char*)src;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (temp_dest);
}
