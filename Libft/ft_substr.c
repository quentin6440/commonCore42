/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:55:05 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/04/02 13:07:45 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!*s || start > ft_strlen(s))
	{
		p = malloc(1);
		p[0] = 0;
		if (!p)
			return (NULL);
		return(p);
	}
	if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	p = ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}
