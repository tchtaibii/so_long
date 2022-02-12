/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:02:35 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 20:52:50 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_before_line(char *s)
{
	int	i;

	if (!s[0])
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (ft_substr(s, 0, i + 1));
}

char	*ft_after_line(char *s)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == '\n')
		{
			str = ft_substr(s, i + 1, ft_strlen(s));
			free (s);
			return (str);
		}
		i++;
	}
	free (s);
	return (NULL);
}

char	*ft_getline(int fd, char *a)
{
	char	*str;
	int		t;

	str = malloc (2);
	t = 1;
	while (!check_line(a) && t)
	{
		t = read(fd, str, 1);
		if (t == -1)
		{
			free(str);
			return (NULL);
		}
		str[t] = '\0';
		a = ft_strjoin(a, str);
	}
	free(str);
	return (a);
}

char	*get_next_line(int fd)
{
	static char	*red;
	char		*l;

	if (fd < 0)
		return (NULL);
	red = ft_getline(fd, red);
	if (!red)
		return (NULL);
	l = ft_before_line (red);
	red = ft_after_line(red);
	return (l);
}

char	*get_map(int fd)
{
	char	*nl;
	char	*map;
	char	*tmp;

	map = ft_strdup("");
	while (1)
	{
		nl = get_next_line(fd);
		if (!nl)
			break ;
		tmp = map;
		map = ft_strjoin1(map, nl);
		free(tmp);
		free(nl);
	}
	return (map);
}
