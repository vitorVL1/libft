/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:38:25 by vlima             #+#    #+#             */
/*   Updated: 2022/11/01 14:16:25 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;	

	if (!s1 || !s2 ||
		!(str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
	{
		return (0);
	}
	while (s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (s1)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str = "\0";
	return (str);
}
