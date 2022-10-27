/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:20 by vlima             #+#    #+#             */
/*   Updated: 2022/10/25 17:39:50 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isalpha(int c)

{
	if (c >= 'a' && c <= 'z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (ft_isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);

    return 0;
}