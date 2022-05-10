/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:56:00 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/18 21:08:36 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*l;

	i = 0;
	p = (unsigned char *)s1;
	l = (unsigned char *)s2;
	if (!n)
		return (0);
	while (i < n - 1 && p[i] == l[i])
		i++;
	return (p[i] - l[i]);
}
