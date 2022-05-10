/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:23:29 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/18 21:38:25 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*l;

	i = 0;
	p = (unsigned char *)s1;
	l = (unsigned char *)s2;
	if (!n)
		return (0);
	while (p[i] && l[i] && p[i] == l[i] && i < n - 1)
		i++;
	return (p[i] - l[i]);
}
