/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:46:46 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/28 15:51:35 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	if (ptr1 < ptr2)
	{
		i = 0;
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	else if (ptr1 > ptr2)
	{
		i = n;
		while (i > 0)
		{
			ptr1[i - 1] = ptr2[i - 1];
			i--;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   char dest[100] = "oldstring";
   const char src[100]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest +3,dest , 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
} */