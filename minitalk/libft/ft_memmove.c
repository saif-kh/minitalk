/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:36:02 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/09 19:46:16 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*l;

	if (!src && !dst)
		return (0);
	p = (unsigned char *)dst;
	l = (unsigned char *)src;
	if (dst < src)
		ft_memcpy(p, l, len);
	else if (len != 0)
	{
		i = len - 1;
		while (i > 0)
		{
			p[i] = l[i];
			i--;
		}
		p[i] = l[i];
	}
	return (dst);
}
