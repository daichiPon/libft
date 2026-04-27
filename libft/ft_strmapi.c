#include <stdlib.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(!s||!f)
        return (NULL);
    size_t s_len;
    size_t ßi;
    char *sßtr;
    s_len=0;
    i=0;
    while(s[s_len])
        s_len++;
    str=malloc(sizeof(char)*(s_len+1));
    if(!str)
        return (NULL);
    while(s[i])
    {
        str[i]=f(i,s[i]);
        i++;
    }
    str[i]='\0';
    return str;
}