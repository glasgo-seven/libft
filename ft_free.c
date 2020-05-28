#include "libft.h"

void	*ft_free(void **array, int last)
{
	int	i;

	i = last;
	if (array == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (array[i])
			free((void*)array[i]);
		i--;
	}
	free((void*)array);
	return (NULL);
}
