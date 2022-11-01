/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:02:58 by vitorvl           #+#    #+#             */
/*   Updated: 2022/11/01 11:05:40 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	size_t	a;

	n = 0;
	a = 0;
	if (ft_strlen(little) == 0)
	{
		return ((char *) &big[0]);
	}
	if (little[a] == '\0' )
	{
		return ((char *) little);
	}
	while (big[n])
	{
		a = 0;
		while (big[n] && big[n++] == little[a++] && n <= len)
		{
			if (little[a] == '\0')
			{
				return ((char *) &big[n - a]);
			}
		}
	}
	return (NULL);
}

/* int main () {
   
   char *ret;

   ret = ft_strnstr("lorem ipsum dolor sit amet", "", 10);

   printf("%s\n", ret);
   
   return(0);
}  */