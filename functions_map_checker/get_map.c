
#include "../so_long.h"

int ft_strlen(char *str)
{
    int i = 0;
    
    if(!str)
        return 0;
    while (str[i])
        i++;
    return i;
}
char *ft_substr(char *str, int start, int len)
{
    int i = 0;
    int j = 0;
    char *new;

    if (!str)
        return 0;
    if (start >= ft_strlen(str))
        len = 0;
    while (i < len && str[i])
        i++;
    new = malloc(i + 1);
    if (!new)
        return 0;
    while (j < i)
        new[j++] = str[start++];
    new[j] = '\0';
    return new;
}
char *ft_strjoin(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char *new;

    if(!s1 && !s2)
        return 0;
    if (!s1)
    {
        s1 = malloc(1);
        s1[0] = 0;
    }
    new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!new)
        return 0;
    while (s1[i])
        new[j++] = s1[i++];
    i = 0;
    while (s2[i])
        new[j++] = s2[i++];
    new[j] = '\0';
    free(s1);
    return new;
}
int check_new_line(char *str)
{
    int i = 0;

    if (!str)
        return 0;
    while (str[i])
    {
        if(str[i] == '\n')
            return 1;
        i++;
    }
    return 0;
}
char *ft_a(char *str)
{
    if (!str)
        return 0;
    int i = 0;
    char *tmp;
    while (str[i])
    {
        if(str[i] == '\n')
        {
            tmp = ft_substr(str, i + 1, ft_strlen(str));
            free(str);
            return tmp;
        }
        i++;
    }
    return 0;
}

char *ft_b(char *str)
{
    int i = 0;

    if (!str[0])
        return 0;
    while (str[i] && str[i] != '\n')
        i++;
    return (ft_substr(str, 0, i +1));
}
char *get_line(int fd, char *str)
{
    char *tmp;
    int t = 1;

    tmp = malloc(BUFFER_SIZE + 1);
    if (!tmp)
        return 0;
    while (t && !check_new_line(str))
    {
        t = read(fd, tmp, BUFFER_SIZE);
        if(t == -1)
        {
            free(tmp);
            return 0;
        }
        tmp[t] = '\0';
        str = ft_strjoin(str, tmp);
    }
    free(tmp);
    return str;
}
char *get_next_line(int fd)
{
    static char *sta;
    char *l;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return 0;
    sta = get_line(fd, sta);
    if(!sta)
        return 0;
    l = ft_b(sta);
    sta = ft_a(sta);
    return l;
}

char *ft_strjoin1(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char *new;

    if(!s1 && !s2)
        return 0;
    if (!s1)
    {
        s1 = malloc(1);
        s1[0] = 0;
    }
    new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!new)
        return 0;
    while (s1[i])
        new[j++] = s1[i++];
    i = 0;
    while (s2[i])
        new[j++] = s2[i++];
    new[j] = '\0';
    //free(s1);
    return new;
}

char *get_map(int fd)
{
    char *tmp;
    char *map;
    
    map = 0;
    while (1)
    {
        tmp = get_next_line(fd);
        if (tmp == NULL)
        {
            free(tmp);
            break;
        }
        map = ft_strjoin1(map, tmp);
        free(tmp);
    }
    return (map);
}
