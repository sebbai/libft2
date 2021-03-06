/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:14:55 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/14 17:17:41 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_words(const char *s, char c)
{
	int		i;
	int		nb_words;

	if (!s)
		return (0);
	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if ((s[i] != c) && (s[i] != '\0'))
			nb_words++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
	}
	return (nb_words);
}
