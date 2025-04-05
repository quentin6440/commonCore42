/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 02:17:19 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/04/05 02:38:15 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nlen(int n)
{
	size_t	nlen;

	nlen = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		nlen++;
		n *= -1;
	}
	while (n)
	{
		nlen++;
		n /= 10;;
	}
	return (nlen);
}

char 	*ft_itoa(int n)
{
	char	*p;
	size_t	i;
	long	nl;

	nl = n;
	i = ft_nlen(n);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[i--] = 0;
	if (nl == 0)
		p[i--] = 48;
	if (nl < 0)
	{
		p[0] = '-';
		nl *= -1;
	}
	while (nl)
	{
		p[i--] = nl % 10 + 48;
		nl /= 10;
	}
	return (p);
}
