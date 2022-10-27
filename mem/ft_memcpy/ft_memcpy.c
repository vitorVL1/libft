/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorvl <vitorvl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:33:30 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/27 22:36:54 by vitorvl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    
    i = 0;
    
	if (!dest && !src)
    {
        return (0);
    }
	
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}