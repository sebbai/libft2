/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:43:04 by sebbaill          #+#    #+#             */
/*   Updated: 2019/11/28 17:43:29 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void		*temp;

	if (!(temp = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(temp, nmemb * size);
	return (temp);
}
