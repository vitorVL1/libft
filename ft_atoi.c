/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:20:53 by vlima             #+#    #+#             */
/*   Updated: 2023/04/21 14:47:19 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sinal;
	int	res;

	i = 0;
	res = 0;
	sinal = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sinal = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sinal);
}
/*  #include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "+54");
   val = ft_atoi(str);
   printf("String value = %s, str value = %c\n", str, val);

   return(0);
}  */