#include "functions.h"

char	**ft_size(char *str)
{
	int w = 0;
	int h;
	char **spt = ft_split(str, '\n');
	while (spt[w])
	{
		h = 0;
		while(spt[w][h] != '\0')
			h++;
		w++;
	}
	map_height = h * 68;
	map_weight = w * 68;
	return (spt);
}
