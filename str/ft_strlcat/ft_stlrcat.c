/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:38:57 by vlima             #+#    #+#             */
/*   Updated: 2022/10/29 16:22:04 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 0;
	while (dst != '\0')
	{
		i++;
	}
	while (src[i] != '\0' && i <= dstsize)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i1];
		i++;
		i1++;
	}
}
