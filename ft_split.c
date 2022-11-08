/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:39:15 by vlima             #+#    #+#             */
/*   Updated: 2022/11/08 12:17:15 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	words;
	int	separator;

	words = 0;
	separator = 0;
	while (*str)
	{
		if (*str != c && separator == 0)
		{
			separator = 1;
			words++;
		}
		else if (*str == c)
			separator = 0;
		str++;
	}
	return (words);
}

static	char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	index = -1;
	i = 0;
	j = 0;
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
