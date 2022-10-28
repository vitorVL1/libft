/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:41:21 by vlima             #+#    #+#             */
/*   Updated: 2022/10/28 12:58:19 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

size_t	ft_nptrlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i <= size)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
}
