#include <unistd.h>
#include <limits.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	while (len > INT_MAX)
	{
		write(fd, s, INT_MAX);
		s += INT_MAX;
		len -= INT_MAX;
	}
	if (len > 0)
		write(fd, s, len);
}