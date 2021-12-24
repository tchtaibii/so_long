#include "so_long.h"

int map_rect(char *map, int j ,int i, int k)
{
    k = i + 1;
    i *= 2;
    while (map[j])
    {
        j++;
        if (map[j] == '\n')
        {
        if ((i + 1) != j)
        {
            write(1, "map isn't rect", 14);
            return 0;
        }
        else
            i += k;
        }
    }
    return k;
}
int map_rect2(char *map, int j, int k)
{
    if (j + 1 != k)
    {
        write(1, "map isn't rect2", 14);
        return 0;
    }
    return 1;
}