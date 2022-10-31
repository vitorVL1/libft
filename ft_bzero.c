/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:19:54 by vlima             #+#    #+#             */
/*   Updated: 2022/10/31 15:09:14 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
	return (0);
}
/* #include <nptrings.h>
#include <stdio.h>
int main()
{
	char s[] = "abcasdasdada";
	printf("%s\n",s);
	ft_bzero(s,2);
	printf("%s",s);
    bzero(s,2);
	printf("%s",s);
} */