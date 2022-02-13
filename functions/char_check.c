/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   char_check.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/12/24 14:55:10 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/10 19:01:39 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../so_long.h"

int	ft_char_less(char *map, int i)
{
	if (map[i] != '\n' && map[i] == '0' && map[i] == 'E' \
		&& map[i] == 'C' && map[i] == '1' && map[i] == 'P')
	{
		write(1, "Error\nchar less detected", 24);
		return (0);
	}
	return (1);
}

int	ft_edges(char *map, int i)
{
	if ((map[i] == '\n' && map[i - 1] != '1') \
		|| (map[i] == '\n' && map[i + 1] != '1'))
	{
		write(1, "Error\nFIX UR EDGES", 18);
		return (0);
	}
	return (1);
}

int	char_check(char	*map, int e, int p)
{
	int		i;

	i = 0;
	while (map[i++])
	{
		if (!ft_char_less(map, i))
			return (0);
		if (map[i] == 'E')
			e++;
		if (map[i] == 'P')
			p++;
		if (map[i] == 'C')
			g_coin_fnum++;
		if (!ft_edges(map, i))
			return (0);
	}
	if (g_coin_fnum < 1 || e < 1 || p != 1)
	{
		write(1, "Error\nmore or less than objects", 31);
		return (0);
	}
	return (1);
}
