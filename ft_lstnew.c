/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:34 by vlima             #+#    #+#             */
/*   Updated: 2022/11/09 12:29:45 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst == NULL)
		return (NULL);
newlst->content = content;
newlst->next = NULL;
	return (newlst);
}
