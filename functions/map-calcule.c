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
	map_height = h * 90;
	map_weight = w * 90;
	return (spt);
}
// int main()
// {
// 	ft_size("1111111111111\n10010000000C1\n100001C111001\n1P0011E000001\n1111111111111");
// }