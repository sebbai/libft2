/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:10:45 by sebbaill          #+#    #+#             */
/*   Updated: 2019/12/30 23:45:09 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		ft_wordlen(const char *s, int i, char c)
{
	int		len;

	len = 0;
	while ((s[i + len] != c) && (s[i + len] != '\0'))
		len++;
	return (len);
}

static	char	**ft_words_array(char **tab, const char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i] != '\0'))
		{
			if (!(tab[j] = (char*)malloc(sizeof(char)
			* (ft_wordlen(s, i, c) + 1))))
				return (NULL);
			k = 0;
			while (k < ft_wordlen(s, i, c))
			{
				tab[j][k] = s[i + k];
				k++;
			}
			tab[j++][k] = '\0';
			i = k + i - 1;
		}
		i++;
	}
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	char	**array_words;
	int		nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	if (!(array_words = (char**)malloc(sizeof(char *) * nb_words + 1)))
		return (0);
	array_words[nb_words] = 0;
	array_words = ft_words_array(array_words, s, c);
	return (array_words);
}
