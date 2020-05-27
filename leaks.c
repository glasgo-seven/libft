#include "libft.h"
#include <stdio.h>

void	del(void *cnt)
{
	cnt = NULL;
	free(cnt);
}

void	f(void *cnt)
{
	cnt = ft_strdup("L0L");
}

void	*_f(void *cnt)
{
	return (ft_strdup("L0L"));
}

char	ff(unsigned int i, char c)
{
	return (c + i);
}

int		main(void)
{
	int j;
	j = 0;
	char	*str = ft_strdup("1234");
	ft_putchar_fd('a', 1);
	t_list	*lst;
	ft_putchar_fd('a', 1);
	lst = ft_lstnew("megh");
	ft_putchar_fd('a', 1);
	t_list	*elem = ft_lstnew("mda");
	ft_putchar_fd('a', 1);
	char	*src = ft_strdup("1234");
	ft_putchar_fd('a', 1);
	char	*dst = ft_strdup("abcd");
	ft_putchar_fd('a', 1);

	int i =0;
	ft_putnbr_fd(i++, 1);
	ft_atoi("92233720368547758");
	ft_putnbr_fd(i++, 1);
	ft_bzero(str, 4);
	ft_putnbr_fd(i++, 1);
	str = ft_calloc(4, sizeof(char));
	ft_putnbr_fd(i++, 1);
	ft_isalnum(40);
	ft_putnbr_fd(i++, 1);
	ft_isalpha(40);
	ft_putnbr_fd(i++, 1);
	ft_isascii(40);
	ft_putnbr_fd(i++, 1);
	ft_isdigit(40);
	ft_putnbr_fd(i++, 1);
	ft_isprint(40);
	ft_putnbr_fd(i++, 1);
	ft_itoa(-2147483);
	ft_putnbr_fd(i++, 1);
	ft_lstadd_back(&lst, elem);
	ft_putnbr_fd(i++, 1);
	ft_lstadd_front(&lst, elem);
	ft_putnbr_fd(i++, 1);
//	ft_lstclear(&lst, NULL);
	ft_putnbr_fd(i++, 1);
//	ft_lstdelone(elem, NULL);
	ft_putnbr_fd(i++, 1);
	lst = ft_lstnew("megh");
	ft_putnbr_fd(i++, 1);
	ft_lstiter(lst, *f);
	ft_putnbr_fd(i++, 1);
	elem = ft_lstnew("mda");
	ft_putnbr_fd(i++, 1);
	ft_lstadd_back(&lst, elem);
	ft_putnbr_fd(i++, 1);
	ft_lstlast(lst);
	ft_putnbr_fd(i++, 1);
	ft_lstmap(lst, _f, NULL);
	ft_putnbr_fd(i++, 1);
	ft_lstsize(lst);
	ft_putnbr_fd(i++, 1);
	ft_memccpy(dst, src, 66, 3);
	ft_putnbr_fd(i++, 1);
	ft_memchr(src, 66, 3);
	ft_putnbr_fd(i++, 1);
	ft_memcmp(src, dst, 4);
	ft_putnbr_fd(i++, 1);
	ft_memcpy(dst, src, 2);
	ft_putnbr_fd(i++, 1);
	ft_memmove(dst, src, 7);
	ft_putnbr_fd(i++, 1);
	ft_memset(dst, 80, 10);
	ft_putnbr_fd(i++, 1);
	ft_putchar_fd('g', 1);
	ft_putnbr_fd(i++, 1);
	ft_putendl_fd(dst, 1);
	ft_putnbr_fd(i++, 1);
	ft_putnbr_fd(-1488, 1);
	ft_putnbr_fd(i++, 1);
	ft_putstr_fd(src, 1);
	ft_putnbr_fd(i++, 1);
	ft_split(ft_strdup("   kek        lol mda"), ' ');
	ft_putnbr_fd(i++, 1);
	ft_strchr(src, 69);
	ft_putnbr_fd(i++, 1);
	ft_strjoin(dst, src);
	ft_putnbr_fd(i++, 1);
	ft_strlcat(dst, src, 15);
	ft_putnbr_fd(i++, 1);
	ft_strlcpy(src, dst, 20);
	ft_putnbr_fd(i++, 1);
	ft_strlen(dst);
	ft_putnbr_fd(i++, 1);
	ft_strmapi(src, ff);
	ft_putnbr_fd(i++, 1);
	ft_strnstr(dst, src, 20);
	ft_putnbr_fd(i++, 1);
	ft_strrchr(src, 69);
	ft_putnbr_fd(i++, 1);
	ft_strtrim(ft_strdup("asd_-KEK-_sda"), "das");
	ft_putnbr_fd(i++, 1);
	ft_substr(dst, 2, 15);
	ft_putnbr_fd(i++, 1);
	ft_tolower(88);
	ft_putnbr_fd(i++, 1);
	ft_toupper(88);
	scanf("%d",&j);
	return (0);
}
