/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:31:25 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/09 14:37:59 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	x;

	i = 0;
	x = c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == x)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
