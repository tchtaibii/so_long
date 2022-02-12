/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:02:35 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 16:13:17 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

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

char *ft_strjoin1(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		a;
	int		b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	new = malloc ((a + b + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < a)
		new[i++] = s1[j++];
	j = 0;
	while (j < b)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}

char	*get_map(int fd)
{
	char	*line;
	char	*new;
	char	*tmp;

	new = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (fd < 0)
			exit (1);
		if (!line)
			break ;
		tmp = new;
		new = ft_strjoin1(new, line);
		free(tmp);
		free(line);
	}
	return(new);
}
