/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:51:19 by vlima             #+#    #+#             */
/*   Updated: 2022/11/04 17:28:08 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len ++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		nb;
	int		len;
	char	*str;

	nb = n;

	len = ft_nlen(n);
	if (nb == 0)
		str[0] = '0';
	str = (char *)malloc(len +1);
	if (nb < 0)
	{	
		str[0] = '-';
		nb = -nb;
		len++;
	}
	str[len] = '\0';
	while (len)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb /= 10;
	}
	return (str);
}
