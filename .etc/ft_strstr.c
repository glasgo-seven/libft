#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t correct;

	i = 0;
	j = 0;
	correct = 0;
	while (i <= ft_strlen(haystack) - ft_strlen(needle))
	{
		j = 0;
		correct = 0;
		while (*(needle + j) != '\0')
		{
			if (*(needle + j) == *(haystack + j))
				correct++;
			j++;
		}
		if (correct == ft_strlen(needle))
			return (haystack + i);
		i++;
	}
	return (NULL);
}
