/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:11:12 by vlima             #+#    #+#             */
/*   Updated: 2022/10/28 12:02:23 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	a;
	long int		i;

	a = c;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = a;
		i++;
	}
}
/* #include <stdio.h>
int main()
{
	char s[] = "abc";
	printf("%s\n",s);
	ft_memset(s,33,1);
	printf("%s",s);
} */