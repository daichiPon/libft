
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;
    size_t s_len;
    i=0;
    s_len=0;
    while(s[s_len])
        s_len++;
    while(i<s_len)
    {
        f(i,&s[i]);
        i++;
    }
}
