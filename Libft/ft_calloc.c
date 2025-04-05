/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 02:14:14 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/03/30 02:46:37 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t totsz;
	void	*p;

	totsz = nmemb * size;
	if (nmemb != totsz / size)
		return (NULL);
	p = 0;
	if (!nmemb || !size)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		ft_bzero(p, 1);
		return (p);
	}
	p = malloc(totsz);
	if (!p)
		return (NULL);
	ft_bzero(p, totsz);
	return (p);
}
