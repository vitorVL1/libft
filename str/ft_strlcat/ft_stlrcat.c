/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:38:57 by vlima             #+#    #+#             */
/*   Updated: 2022/10/28 12:58:19 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

size_t	nptrlcat(char *renptrict dst, const char *renptrict src, size_t dstsize)
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
