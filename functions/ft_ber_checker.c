#include "functions.h"
int	ft_ber_checker(char *string)
{
	int index;
	index = 0;
	if (!string)
		return 0;
	while (string[index])
	{
		if(string[index] == '.' && string[index + 1] == 'b' && string[index + 2] == 'e' && string[index + 3] == 'r' && string[index + 4] == '\0')
			return 1;
		index++;
	}
	return 0;
}