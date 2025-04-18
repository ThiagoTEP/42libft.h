
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void print_str_or_null(char *str) {
    if (str)
        printf("%s\n", str);
    else
        printf("(null)\n");
}

//strmapi
char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (char)toupper(c);
	return c;
}

//striteri
void increment_char(unsigned int i, char *c)
{
    *c += 1; 
}

int main(void) {

    // ft_isalpha
    printf("\n===== ft_isalpha =====\n");
    printf("%d %d\n", isalpha('a'), ft_isalpha('a'));
    printf("%d %d\n", isalpha('Z'), ft_isalpha('Z'));
    printf("%d %d\n", isalpha('1'), ft_isalpha('1'));
    printf("%d %d\n", isalpha('@'), ft_isalpha('@'));
    printf("%d %d\n", isalpha('\n'), ft_isalpha('\n'));

    // ft_isdigit
    printf("\n===== ft_isdigit =====\n");
    printf("%d %d\n", isdigit('0'), ft_isdigit('0'));
    printf("%d %d\n", isdigit('5'), ft_isdigit('5'));
    printf("%d %d\n", isdigit('9'), ft_isdigit('9'));
    printf("%d %d\n", isdigit('a'), ft_isdigit('a'));
    printf("%d %d\n", isdigit(' '), ft_isdigit(' '));

    // ft_isalnum
    printf("\n===== ft_isalnum =====\n");
    printf("%d %d\n", isalnum('a'), ft_isalnum('a'));
    printf("%d %d\n", isalnum('1'), ft_isalnum('1'));
    printf("%d %d\n", isalnum('A'), ft_isalnum('A'));
    printf("%d %d\n", isalnum(' '), ft_isalnum(' '));
    printf("%d %d\n", isalnum('-'), ft_isalnum('-'));

    // ft_isascii
    printf("\n===== ft_isascii =====\n");
    printf("%d %d\n", isascii(0), ft_isascii(0));
    printf("%d %d\n", isascii(127), ft_isascii(127));
    printf("%d %d\n", isascii(128), ft_isascii(128));
    printf("%d %d\n", isascii(-1), ft_isascii(-1));
    printf("%d %d\n", isascii('a'), ft_isascii('a'));

    // ft_isprint
    printf("\n===== ft_isprint =====\n");
    printf("%d %d\n", isprint(31), ft_isprint(31));
    printf("%d %d\n", isprint(32), ft_isprint(32));
    printf("%d %d\n", isprint(126), ft_isprint(126));
    printf("%d %d\n", isprint(127), ft_isprint(127));
    printf("%d %d\n", isprint('A'), ft_isprint('A'));

    // ft_strlen
    printf("\n===== ft_strlen =====\n");
    printf("%zu %zu\n", strlen(""), ft_strlen(""));
    printf("%zu %zu\n", strlen("A"), ft_strlen("A"));
    printf("%zu %zu\n", strlen("12345"), ft_strlen("12345"));
    printf("%zu %zu\n", strlen("libft"), ft_strlen("libft"));
    printf("%zu %zu\n", strlen("Hello, World!"), ft_strlen("Hello, World!"));

    // ft_memset
    printf("\n===== ft_memset =====\n");
    char buf1[10]; char buf2[10];
    memset(buf1, 'A', 5); ft_memset(buf2, 'A', 5);
    printf("%.*s %.*s\n", 5, buf1, 5, buf2);
    memset(buf1, 'B', 3); ft_memset(buf2, 'B', 3);
    printf("%.*s %.*s\n", 3, buf1, 3, buf2);
    memset(buf1, 0, 10); ft_memset(buf2, 0, 10);
    printf("%d %d\n", buf1[0], buf2[0]);

    // ft_memcpy
    printf("\n===== ft_memcpy =====\n");
    char d1[10]; char d2[10];
    memcpy(d1, "abcde", 6); ft_memcpy(d2, "abcde", 6);
    printf("%s %s\n", d1, d2);

    // ft_memmove
    printf("\n===== ft_memmove =====\n");
    char m1[10] = "abcdef";
    char m2[10] = "abcdef";
    memmove(m1+2, m1, 4);
    ft_memmove(m2+2, m2, 4);
    printf("%s %s\n", m1, m2);

    // ft_strlcpy
    printf("\n===== ft_strlcpy =====\n");
    char c1[10]; char c2[10];
    printf("%lu %lu\n", strlcpy(c1, "abc", 4), ft_strlcpy(c2, "abc", 4));
    printf("%s %s\n", c1, c2);

    // ft_strlcat
    printf("\n===== ft_strlcat =====\n");
    char cat1[10] = "ab"; char cat2[10] = "ab";
    printf("%lu %lu\n", strlcat(cat1, "cd", 10), ft_strlcat(cat2, "cd", 10));
    printf("%s %s\n", cat1, cat2);

    // ft_strchr
    printf("\n===== ft_strchr =====\n");
    printf("%s %s\n", strchr("abc", 'b'), ft_strchr("abc", 'b'));
    printf("%s %s\n", strchr("abc", 'z'), ft_strchr("abc", 'z'));

    // ft_strrchr
    printf("\n===== ft_strrchr =====\n");
    printf("%s %s\n", strrchr("abcabc", 'b'), ft_strrchr("abcabc", 'b'));

    // ft_strncmp
    printf("\n===== ft_strncmp =====\n");
    printf("%d %d\n", strncmp("abc", "abc", 3), ft_strncmp("abc", "abc", 3));
    printf("%d %d\n", strncmp("abc", "abd", 3), ft_strncmp("abc", "abd", 3));

    // ft_strdup
    printf("\n===== ft_strdup =====\n");
    char *s1 = strdup("hello");
    char *s2 = ft_strdup("hello");
    printf("%s %s\n", s1, s2);
    free(s1); free(s2);

    // ft_substr
    printf("\n===== ft_substr =====\n");
    print_str_or_null(ft_substr("libft", 2, 3));

    // ft_strjoin
    printf("\n===== ft_strjoin =====\n");
    print_str_or_null(ft_strjoin("lib", "ft"));

    // ft_strtrim
    printf("\n===== ft_strtrim =====\n");
    print_str_or_null(ft_strtrim("..hello..", "."));

    // ft_split
    printf("\n===== ft_split =====\n");
    char **split = ft_split("a,b,c", ',');
    for (int i = 0; split[i]; i++) printf("%s\n", split[i]);

    // ft_itoa
    printf("\n===== ft_itoa =====\n");
    print_str_or_null(ft_itoa(42));

    // ft_strmapi
    printf("\n===== ft_strmapi =====\n");
    const char	*original = "hello, world!";
	char		*modificada;

	modificada = ft_strmapi(original, to_upper_even);
	
	printf("Original:   %s\n", original);
	printf("Modificada: %s\n", modificada);

	free(modificada);

    // ft_striteri
    printf("\n===== ft_striteri =====\n");
    char str[] = "libft test";

    ft_striteri(str, increment_char);

    printf("%s\n", str);
    
    // ft_putchar_fd
    printf("\n===== ft_putchar_fd =====\n");
    ft_putchar_fd('X', 1);
    printf("\n");

    // ft_putstr_fd
    printf("\n===== ft_putstr_fd =====\n");
    ft_putstr_fd("libft\n", 1);

    // ft_putendl_fd
    printf("\n===== ft_putendl_fd =====\n");
    ft_putendl_fd("fim", 1);

    // ft_putnbr_fd
    printf("\n===== ft_putnbr_fd =====\n");
    ft_putnbr_fd(1234, 1);
    printf("\n");

    return 0;
}