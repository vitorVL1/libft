/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:13:05 by vlima             #+#    #+#             */
/*   Updated: 2022/11/02 19:11:54 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;
	int		len2;

	i = 0;
	len = ft_strlen(s1);
	len2 = ft_strlen(set);
	str = (char *)malloc(len + 1);
	if (!s1 || !set)
		return (0);
	ft_strlcpy(str,s1,len+1);
	while (((ft_strncmp(s1, set, len2)) == 0) && s1)
	{
		str[i] = s1[i+len2];
		i++;
	}
	while (((ft_strncmp(&s1[len - len2 -1], set, len2)) == 0) || i >= (len - len2))
	{
		str[i] = s1[i];
		i--;
	}
	return (str);
}

/* int main()
{
	printf("%s", ft_strtrim("lorem \n ipsum \t dolor \n sit \t ame", "et"));
} */
