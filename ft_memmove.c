/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:03:51 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 15:12:33 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;

	if (dest == src)
		return (dest);
	temp_dest = (char*)dest;
	temp_src = (char*)src;
	if (temp_src < temp_dest)
	{
		while ((int)(--n) >= 0)
			temp_dest[n] = temp_src[n];
		return (temp_dest);
	}
	return (ft_memcpy(temp_dest, temp_src, n));
}
