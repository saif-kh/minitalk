/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:39:53 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/15 23:55:46 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

static int	find_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check(set, s1[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int	find_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (check(set, s1[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	i = find_start(s1, set);
	if (i >= (int)ft_strlen(s1))
		return (ft_strdup(""));
	k = find_end(s1, set);
	p = malloc((k - i + 2) * sizeof(char));
	if (!p)
		return (0);
	j = 0;
	while (i <= k)
		p[j++] = s1[i++];
	p[j] = '\0';
	return (p);
}
