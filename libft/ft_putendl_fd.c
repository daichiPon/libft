#include <limits.h>
#include <stdlib.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t i;
	i = 0;
	while (s[i])
		i++;
	while (i > INT_MAX)
	{
		write(fd, s, INT_MAX);
		s += INT_MAX;
		i += INT_MAX;
	}
	if (i > 0)
	{
		write(fd, s, i);
		write(fd, '\n', 1);
	}
}