#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Función adicional para ft_strmapi
char	my_func(unsigned int i, char c)
{
	return (c + i);
}

// Función adicional para ft_striteri
void	my_iteri(unsigned int i, char *c)
{
	*c = *c + i;
}

void	test_ft_isalpha(void)
{
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
	printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
	printf("ft_isalnum('!'): %d\n", ft_isalnum('!'));
}

void	test_ft_isascii(void)
{
	printf("ft_isascii('A'): %d\n", ft_isascii('A'));
	printf("ft_isascii(200): %d\n", ft_isascii(200));
}

void	test_ft_isprint(void)
{
	printf("ft_isprint('A'): %d\n", ft_isprint('A'));
	printf("ft_isprint(30): %d\n", ft_isprint(30));
}

void	test_ft_strlen(void)
{
	printf("ft_strlen('Hello'): %zu\n", ft_strlen("Hello"));
}

void	test_ft_memset(void)
{
	char	str[10] = "abcdef";

	ft_memset(str, 'X', 3);
	printf("ft_memset: %s\n", str);
}

void	test_ft_bzero(void)
{
	char	str[10] = "abcdef";

	ft_bzero(str, 3);
	printf("ft_bzero: %s\n", str + 3);
}

void	test_ft_memcpy(void)
{
	char	src[10] = "abcdef";
	char	dest[10];

	ft_memcpy(dest, src, 6);
	printf("ft_memcpy: %s\n", dest);
}

void	test_ft_memmove(void)
{
	char	str[] = "abcdef";

	ft_memmove(str + 2, str, 4);
	printf("ft_memmove: %s\n", str);
}

void	test_ft_strlcpy(void)
{
	char	src[] = "Hello";
	char	dest[10];

	ft_strlcpy(dest, src, sizeof(dest));
	printf("ft_strlcpy: %s\n", dest);
}

void	test_ft_strlcat(void)
{
	char	dest[20] = "Hello";
	char	src[] = " World";

	ft_strlcat(dest, src, sizeof(dest));
	printf("ft_strlcat: %s\n", dest);
}

void	test_ft_toupper(void)
{
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
}

void	test_ft_tolower(void)
{
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
}

void	test_ft_strchr(void)
{
	printf("ft_strchr('Hello', 'e'): %s\n", ft_strchr("Hello", 'e'));
}

void	test_ft_strrchr(void)
{
	printf("ft_strrchr('Hello', 'l'): %s\n", ft_strrchr("Hello", 'l'));
}

void	test_ft_strncmp(void)
{
	printf("ft_strncmp('Hello', 'Hel', 3): %d\n", ft_strncmp("Hello", "Hel",
			3));
}

void	test_ft_memchr(void)
{
	printf("ft_memchr('abcdef', 'c', 6): %s\n", (char *)ft_memchr("abcdef", 'c',
			6));
}

void	test_ft_memcmp(void)
{
	printf("ft_memcmp('abc', 'abd', 3): %d\n", ft_memcmp("abc", "abd", 3));
}

void	test_ft_strnstr(void)
{
	printf("ft_strnstr('Hello World', 'World', 11): %s\n",
		ft_strnstr("Hello World", "World", 11));
}

void	test_ft_atoi(void)
{
	printf("ft_atoi('42'): %d\n", ft_atoi("42"));
}

void	test_ft_calloc(void)
{
	int	*arr;

	arr = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("ft_calloc[%d]: %d\n", i, arr[i]);
	free(arr);
}

void	test_ft_strdup(void)
{
	char	*dup;

	dup = ft_strdup("Hello");
	printf("ft_strdup: %s\n", dup);
	free(dup);
}

void	test_ft_substr(void)
{
	char	*substr;

	substr = ft_substr("Hello", 1, 3);
	printf("ft_substr: %s\n", substr);
	free(substr);
}

void	test_ft_strjoin(void)
{
	char	*joined;

	joined = ft_strjoin("Hello", " World");
	printf("ft_strjoin: %s\n", joined);
	free(joined);
}

void	test_ft_strtrim(void)
{
	char	*trimmed;

	trimmed = ft_strtrim("  Hello World  ", " ");
	printf("ft_strtrim: %s\n", trimmed);
	free(trimmed);
}

void	test_ft_split(void)
{
	char	**split;

	split = ft_split("Hello World from 42", ' ');
	for (int i = 0; split[i]; i++)
	{
		printf("ft_split[%d]: %s\n", i, split[i]);
		free(split[i]);
	}
	free(split);
}

void	test_ft_itoa(void)
{
	char	*str;

	str = ft_itoa(12345);
	printf("ft_itoa: %s\n", str);
	free(str);
}

void	test_ft_strmapi(void)
{
	char	*mapped;

	mapped = ft_strmapi("Hello", my_func);
	printf("ft_strmapi: %s\n", mapped);
	free(mapped);
}

void	test_ft_striteri(void)
{
	char	str[] = "Hello";

	ft_striteri(str, my_iteri);
	printf("ft_striteri: %s\n", str);
}

void	test_ft_putchar_fd(void)
{
	printf("ft_putchar_fd('A', 1): ");
	ft_putchar_fd('A', 1);
	printf("\n");
}

void	test_ft_putstr_fd(void)
{
	printf("ft_putstr_fd('Hello', 1): ");
	ft_putstr_fd("Hello", 1);
	printf("\n");
}

void	test_ft_putendl_fd(void)
{
	printf("ft_putendl_fd('Hello', 1): ");
	ft_putendl_fd("Hello", 1);
}

void	test_ft_putnbr_fd(void)
{
	printf("ft_putnbr_fd(12345, 1): ");
	ft_putnbr_fd(12345, 1);
	printf("\n");
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	return (0);
}
