/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:26:04 by tgontier          #+#    #+#             */
/*   Updated: 2019/05/01 09:28:01 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(char *str);
int			ft_atoi(char *str);
int			ft_isprint(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_isspace(int c);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strdup(const char *str);
char		*ft_strchr(const char *str, int c);
char		*ft_strcat(char *restrict s1, const char *restrict s2);
char		*ft_strrev(char *str);
char		*ft_strnew(size_t size);
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_itoa(int n);
char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
void		*ft_memset(void *b, int c, size_t len);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putnbr_fd(int nb, int fd);
void		ft_bzero(void *s, size_t n);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dest, const void *src, int c, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *s, int a, size_t c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putendl(const char *s);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_strclr(char *s);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

int			get_next_line(const int fd, char **line);

#endif
