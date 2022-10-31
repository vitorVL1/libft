/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:18:48 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/31 17:16:32 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
	{
		while (s[i])
			i++;
		return ((char *)&s[i]);
	}
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main() 
{
    char s[] = "ABCfdf";
    ft_nptrchr(s,73);
    printf("%s\n",);
} */