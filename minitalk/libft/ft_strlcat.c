/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:54:41 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/16 05:19:09 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	dl = 0;
	sl = 0;
	while (dst[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (dl >= dstsize)
		sl += dstsize;
	else
		sl += dl;
	if (dstsize == 0)
		return (sl);
	while (src[i] != '\0' && dl < dstsize - 1)
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (sl);
}
