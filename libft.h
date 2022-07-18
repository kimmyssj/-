#ifndef __LIBFT_H__
# define __LIBFT_H__

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
extern int ft_isalpha(int c);
extern void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
extern char *ft_strchr(const char *s, int c);
extern char *ft_strnstr(const char *haystack, const char *needle, size_t len);
extern int ft_isascii(int c);
extern void *ft_memset(void *b, int c, size_t len);
extern char *ft_strdup(const char *s1);
extern char *ft_strrchr(const char *s, int c);
extern int ft_isdigit(int c);
extern void ft_putchar_fd(char c, int fd);
extern char *ft_strjoin(char const *s1, char const *s2);
extern char *ft_strtrim(char const *s1, char const *set);
extern int ft_atoi(const char *str);
extern int ft_isprint(int c);
extern void ft_putendl_fd(char *s, int fd);
extern size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
extern char *ft_substr(char const *s, unsigned int start, size_t len);
extern void ft_bzero(void *s, size_t n);
extern char *ft_itoa(int n);
extern void ft_putnbr_fd(int n, int fd);
extern size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
extern int ft_tolower(int c);
extern void *ft_calloc(size_t count, size_t size);
extern void *ft_memchr(const void *s, int c, size_t n);
extern void *ft_memmove(void *dst, const void *src, size_t len);
extern void ft_putstr_fd(char *s, int fd);
extern size_t ft_strlen(const char *s);
extern int ft_toupper(int c);
extern int ft_isalnum(int c);
extern int ft_memcmp(const void *s1, const void *s2, size_t n);
extern char **ft_split(char const *s, char c);
extern int ft_strncmp(const char *s1, const char *s2, size_t n);
extern void ft_striteri(char *s, void (*f)(unsigned int, char*));

// end here to define new lib.h file
#endif
