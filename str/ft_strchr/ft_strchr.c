/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorvl <vitorvl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:18:48 by vitorvl           #+#    #+#             */
/*   Updated: 2022/10/27 16:37:49 by vitorvl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char	*ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
	while (s[i] != '\0')
    {
        
        if(s[i] == c)
        {
            return((char *)&s[i]);
        }
        i++;
    }
    return(NULL);
}

/* #include <stdio.h>
int main() 
{
    char s[] = "ABCfdf";
    ft_strchr(s,73);
    printf("%s\n",);
} */