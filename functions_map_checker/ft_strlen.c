#include "../so_long.h"

int ft_strlen1(char *str)
{
    int i = 0;
    
    if(!str)
        return 0;
    while (str[i])
        i++;
    return i;
}
