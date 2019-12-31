/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:45:21 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/28 18:40:12 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_matches(char const c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		end;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	end = len;
	while (ft_matches(s1[i], set) == 1)
		i++;
	if (i == end)
		return (ft_strdup(""));
	end--;
	while (ft_matches(s1[end], set) == 1)
		end--;
	if (!(str = ft_substr(s1, i, (end - i + 1))))
		return (NULL);
	return (str);
}
