/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:19:54 by vlima             #+#    #+#             */
/*   Updated: 2022/10/28 12:02:04 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

void	*ft_bzero(void *s, size_t n)
{
	long int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/* #include <strings.h>
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