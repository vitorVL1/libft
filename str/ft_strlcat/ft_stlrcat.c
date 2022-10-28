/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:38:57 by vlima             #+#    #+#             */
/*   Updated: 2022/10/28 12:08:49 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
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
