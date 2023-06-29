/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:51:19 by vlima             #+#    #+#             */
/*   Updated: 2023/04/26 15:17:57 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_ulenret(unsigned long long n, char *str)
{
	if (n >= 10)
		str = ft_ulenret(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_uitoa(unsigned long long n)
{
	char	str[15];

	ft_ulenret(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}

int	ft_print_uns(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}
