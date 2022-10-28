/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:02:58 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/28 16:52:38 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	n;
	int	a;

	n = 0;
	a = 0;
	if (little[a] == '\0')
		return ((char *) little);
	while (big[n] && n != len)
	{
		a = 0;
		while (big[n] && big[n++] == little[a++] && n != len)
		{
			if (little[a] == '\0')
				return ((char *) &big[n - a]);
		}
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strnstr(haystack, needle,10);

   printf("The substring is: %s\n", ret);
   
   return(0);
} */