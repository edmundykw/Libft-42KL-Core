#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (*ptr != '\0' && n-- != 0)
	{
		*ptr = c;
		ptr++;
	}
	return (s);
}

int main(void)
{
    char *s;

    s = "Hello";
    printf("%s", ft_memset(s, 'B', 2));
}