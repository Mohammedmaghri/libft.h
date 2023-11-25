/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:54:08 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:59:06 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

char	**ft_split(const char *string, char sep);
char	*ft_strmapi(char const *string, char (*f)(unsigned int, char));
void	ft_striteri(char *string, void (*f)(unsigned int, char *));
void	ft_putendl_fd(char *string, int fd);
void	ft_putnbr_fd(int num, int fd );
void	ft_putstr_fd(char *string, int fd);
void	ft_putchar_fd(char car, int fd);
char	*ft_itoa(int number);
char	*ft_strtrim(char const *s1, char const *s2);
char	*ft_strjoin(char const *dest, char const *src);
int		ft_isalnum(int alpha);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(const char *string_src, const char *string_dest, size_t len);
int		ft_memcmp(const void *src, const void *dest, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memmove(void *destination, const void *source, size_t num);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *string, int track, size_t len );
void	*ft_calloc(size_t count, size_t sizelen);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *string, const char *find, size_t len);
char	*ft_strdup(const char *copystring);
char	*ft_substr(char const *string, unsigned int start, size_t xxlen);

#endif
