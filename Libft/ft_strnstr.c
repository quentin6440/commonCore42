/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 22:10:11 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/04/06 22:21:21 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	litlen;

	if (!*little)
		return ((char *)big);
	i = 0;
	litlen = ft_strlen(little);
	while (big[i] && (i + litlen) <= len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
			j++;
			
		}
		i++;
	}
	return (NULL);
}
