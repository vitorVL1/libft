/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:52:30 by vlima             #+#    #+#             */
/*   Updated: 2023/05/10 19:20:38 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_gnl(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\n' && s[i])
	{
		i++;
	}
	return (i + (s[i] == '\n'));
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (s2 && s2[j] && s2[j] != '\n')
		str[i++] = s2[j++];
	if (s2[j] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	free(s1);
	return (str);
}

int	organizer(char *buf)
{
	int	i;
	int	j;
	int	isnwl;

	i = 0;
	j = 0;
	isnwl = 0;
	while (buf[i])
	{
		if (isnwl)
			buf[j++] = buf[i];
		if (buf[i] == '\n')
			isnwl = 1;
		buf[i++] = '\0';
	}
	return (isnwl);
}

char	*get_next_line(int fd)
{
	static char	bf[BUFFER_SIZE + 1];
	char		*str;

	str = NULL;
	if (fd < 0 || fd > FOPEN_MAX)
		return (NULL);
	if (!bf[0])
		bf[read(fd, bf, BUFFER_SIZE)] = 0;
	while (bf[0])
	{
		str = ft_strjoin_gnl(str, bf);
		if (!str)
			return (NULL);
		if (organizer(bf) == 1)
			break ;
		if (read(fd, bf, 0) < 0)
		{
			free(str);
			return (NULL);
		}
		bf[read (fd, bf, BUFFER_SIZE)] = 0;
	}
	return (str);
}
