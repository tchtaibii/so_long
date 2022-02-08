#include "functions.h"

int up_wall(char *map, int i)
{
    while (map[i] != '\n')
    {
        if(map[i] != '1')
        {
            write(1, "fix ur up wall", 14);
            return 0;
        }
        i++;
    }
    return i;
}
int low_wall(char *map, int i, int j)
{
    while (map[i] != '\n')
    {
        if(map[i] != '1')
        {
            write(1, "fix ur low wall", 15);
            return 0;
        }
        i--;
        j++;
    }
    return j;
}
