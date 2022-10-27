/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorvl <vitorvl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:47:05 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/27 21:50:45 by vitorvl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;
    
    i = 0;
    
	if (n == 0)
    {
        return (0);
    }
		
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
        {
            i++;
        }
			
		else
        {
            return (0);
        }
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/* #include <stdio.h>
int main() 
{
    char s1[] = "BBCDfdfc";
    char s2[] = "BBCDfdfc";
    printf("%d\n", ft_strncmp(s1,s2,100));
}  */