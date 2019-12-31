/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:02:53 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 15:11:20 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;

	temp_s = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*(temp_s++) == (unsigned char)c)
			return (temp_s - 1);
	}
	return (NULL);
}
