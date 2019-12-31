/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:04:33 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 15:11:50 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	if (n == 0)
		return (0);
	temp_s1 = (unsigned char*)s1;
	temp_s2 = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*temp_s1++ != *temp_s2++)
			return (*(temp_s1 - 1) - *(temp_s2 - 1));
	}
	return (0);
}
