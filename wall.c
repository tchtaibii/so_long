#include "so_long.h"
int ft_checkE(char *line)
{
	int c = 0;
	while (line[j])
	{
		if(line[j] == 'E')
			c++;
		j++;
	}
	return c;
}
int ft_wall(int fd)
{
	char	*line;
	int i = 0;
	int j = 1;
	line = get_next_line(fd);
	while (line[i] != '\n')
	{
		if (line[i] != '1')
			{
				write(1, "fix ur wall", 11);
				return (0);
			}
		i++;
	}
	free(line);
	line = get_next_line(fd);
	if (line[0] != '1')
	{
		write(1, "fix ur wall", 11);
		return (0);
	}
	int e = ft_checkE(line);
	if (e > 1 || e == 0 )
	{
		write(1, "fix ur exit", 11);
		return 0;
	}
	while (line[j] != '\n')
	{
		
		if (line[j] != '0' || line[j] != '')
		i++;
	}
	
	return i;	
}