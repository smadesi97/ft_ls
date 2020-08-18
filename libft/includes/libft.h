/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>          			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 18:29:58 by smadesi          #+#    #+#              */
/*   Updated: 2019/12/23 15:03:07 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

typedef int t_bool;

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

typedef struct s_rgb
{
	float r;
	float g;
	float b;
} t_rgb;

typedef struct s_hsb
{
	float h;
	float s;
	float b;
} t_hsb;

typedef struct s_vector
{
	float x;
	float y;
	float z;
	float w;
} t_vector;

size_t ft_strlen(const char *str);
int ft_strlencmp(const char *s1, const char *s2);
void ft_putchar(char c);
void ft_putstr(char const *s);
void ft_putstr_free(const char *str);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_swap(int *a, int *b);
void ft_putnbr(int n);
int ft_atoi(const char *str);
char *ft_strcat(char *s1, const char *s2);
char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strcpy(char *dst, const char *src);
char *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strdup(const char *s1);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t len);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isprint(int c);
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnew(size_t size);
int *ft_intnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strjoinfree(char *s1, char *s2, char control);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);
char *ft_itoa(int n);
void ft_putendl(const char *s);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);
t_list *ft_lstnew(void const *content, size_t content_size);
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void ft_lstadd(t_list **alst, t_list *new);
void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int ft_isspace(char c);
char *ft_strctrim(char const *s, char c);
char *ft_strrev(char *s);
void ft_bubblesort_array(char **tab, size_t n);
int ft_clamp(int n, int min, int max);
void ft_memswap(void *a, void *b);
//char *ft_strndup(const char *s, size_t n);
char *ft_strdupfree(const char *s1);
char *ft_strnjoinfree(const char *s1, const char *s2,
					  size_t len, char c);
char *ft_strnjoin(const char *s1, const char *s2, size_t len);
void ft_putnbr_base(int n, int b);
int ft_error(char *s);
int ft_is_power_of_x(unsigned n, unsigned x);
int ft_htoi(char *s);
int ft_rand(int min, int max);
t_rgb ft_hex2rgb(int hex);
int ft_rgb2hex(t_rgb rgb);
t_rgb ft_hsb2rgb(t_hsb hsb);
int ft_hsb2hex(t_hsb hsb);
int ft_shade_color(int c, double n);
int ft_abs(int n);
float ft_fclamp(float n, float min, float max);
char *ft_str2lower(char *s);
char *ft_itoa_base(int n, int b);
double ft_pow(double n, int pow);
t_list *ft_lstswap(t_list *lst1, t_list *lst2);

int ft_putwchar(unsigned wchar, int wstrlen);
size_t ft_wstrlen(unsigned *s);
size_t ft_wcharlen(unsigned c);
int ft_putwstr(wchar_t *s);
wchar_t *ft_wstrjoin(wchar_t *s1, wchar_t *s2);
wchar_t *ft_wstrdup(wchar_t const *s1);
wchar_t *ft_wstrsub(wchar_t *s, unsigned start, unsigned len);
int ft_isascii(int c);
char *ft_lltoa_base(long long n);
char *ft_ulltoa_base(unsigned long long n, int b, int lowup);
long ft_round(double n, int precision);
char *ft_ldtoa(double n, int precision);

#endif
