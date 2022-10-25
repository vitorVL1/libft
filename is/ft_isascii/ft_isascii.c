/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:23:50 by vlima             #+#    #+#             */
/*   Updated: 2022/10/25 18:23:58 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)

{
	if (c >= '0' && c <= '127')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
