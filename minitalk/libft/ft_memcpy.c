/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:16:41 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/11 22:39:26 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*l;

	i = 0;
	if (!dst && !src)
		return (0);
	p = (unsigned char *)dst;
	l = (unsigned char *)src;
	while (i < n)
	{
		p[i] = l[i];
		i++;
	}
	return (dst);
}
