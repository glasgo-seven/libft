#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len_dest;
	size_t i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + len_dest + i) = *(src + i);
		i++;
	}
	*(dest + len_dest + i) = '\0';
	return (dest);
}
