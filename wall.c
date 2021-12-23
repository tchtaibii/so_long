#include "so_long.h"

int ft_wall(int fd)
{
	char	*line;
	int i = 0;
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
	return i;	
}