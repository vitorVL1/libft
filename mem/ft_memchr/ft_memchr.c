/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorvl <vitorvl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:59:54 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/27 23:01:58 by vitorvl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
    int i;
    i = 0;
	while (s[i] < n)
    {
        
        if(s[i] == c)
        {
            return((char *)&s[i]);
        }
        i++;
    }
    return(0);
}