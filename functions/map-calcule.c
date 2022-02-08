#include "functions.h"

int	ft_size(char *str)
{
	int w = 0;
	int h;
	char **spt = ft_split(str, '\n');
	while (spt[w][h])
	{
		h = 0;
		while(spt[w][h] != '\n')
			h++;
		w++;
	}
	printf("h = %d\nw = %d",h,w);
	return 0;
}