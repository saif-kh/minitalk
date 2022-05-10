/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:25:51 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/14 20:25:02 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_pos(char *p, int j, unsigned int x)
{
	int	i;

	i = j;
	p[i] = '\0';
	i--;
	while (i >= 0)
	{
		p[i] = x % 10 + '0';
		x = x / 10;
		i--;
	}
	return (p);
}

static char	*fill_neg(char *p, int j, unsigned int x)
{
	int	i;

	i = j;
	p[i] = '\0';
	i--;
	while (i > 0)
	{
		p[i] = x % 10 + '0';
		x = x / 10;
		i--;
	}
	p[i] = '-';
	return (p);
}

static int	nbr(unsigned int x)
{
	int	i;

	i = 0;
	while (x)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*p;
	int				is_neg;
	unsigned int	x;

	is_neg = 0;
	if (n < 0)
	{
		x = -n;
		is_neg = 1;
	}
	else if (n > 0)
		x = n;
	else
		return (ft_strdup("0"));
	p = malloc((nbr(x) + is_neg + 1) * sizeof(char));
	if (!p)
		return (0);
	if (is_neg == 1)
		return (fill_neg(p, nbr(x) + is_neg, x));
	else
		return (fill_pos(p, nbr(x) + is_neg, x));
}
