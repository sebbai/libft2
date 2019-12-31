/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:46:52 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 15:48:15 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char		*s;
	int			i;
	size_t		len;

	i = 0;
	len = ft_count_numbers(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (!(s = ft_strnew(len)))
		return (0);
	if (n < 0)
		s[len - 1] = '-';
	if (n < 0)
		n = -n;
	while (n / 10 >= 1)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	return (ft_strrev(s));
}
