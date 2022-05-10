/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:14:07 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/15 21:31:19 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{	
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	back_up(char **p, int j)
{
	while (j >= 0)
	{
		free(p[j]);
		j--;
	}
	free(p);
}

static char	**fill(char const *s, char c, int n, char **p)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	j = 0;
	while (j < n)
	{
		while (s[i] == c)
			i++;
		p[j] = malloc((len(s + i, c) + 1) * sizeof(char));
		if (!p[j])
			back_up(p, j);
		k = 0;
		while (s[i] && s[i] != c)
			p[j][k++] = s[i++];
		p[j][k] = '\0';
		j++;
	}
	p[j] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (0);
	p = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!p)
		return (0);
	p = fill(s, c, word_count(s, c), p);
	return (p);
}
