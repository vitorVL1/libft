/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:37:30 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/29 16:25:16 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		i--;
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}

/* #include <stdio.h>
int main() 
{
    char s[] = "ABCfdfc";
    
    printf("%s\n",ft_nptrrchr(s,65));
}  */