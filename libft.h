/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:32:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/01 15:07:41 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_atoi(const char	*nptr);
void	ft_bzero(void	*s, size_t	n);
void	*ft_calloc(size_t	nbr, size_t	size);
int		ft_isalnum(int	c);
int		ft_isalpha(int	c);
int		ft_isascii(int	c);
int		ft_isdigit(int	c);
int		ft_isprint(int	c);
void	*ft_memchr(const void	*s, int	c, size_t	n);
int		ft_memcmp(const void	*s1, const void	*s2, size_t	n);
void	*ft_memcpy(void	*dest, const void	*src, size_t	n);
void	*ft_memmove(void	*dest, const void	*src, size_t	n);
void	*ft_memset(void	*s,	int c, size_t	n);
char	*ft_strchr(const char	*s, int	c);
char	*ft_strdup(const char	*s);
size_t	ft_strlcat(char	*dest, const char	*src, size_t	size);
size_t	ft_strlcpy(char	*dest, const char	*src, size_t	size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	size);
char	*ft_strnstr(const char	*s1, const char	*s2, size_t	n);
char	*ft_strrchr(const char	*s, int	c);
int		ft_tolower(int	c);
int		ft_toupper(int	c);
int		ft_itoa(int	c);
int		ft_putchar_fd(int	c);
int		ft_putendl_fd(int	c);
int		ft_putnbr_fd(int	c);
int		ft_putstr_fd(int	c);
int		ft_split(int	c);
int		ft_striteri(int	c);
char	*ft_strjoin(char const	*s1, char const	*s2);
int		ft_strmapi(int	c);
char	*ft_strtrim(char const	*s1, char const	*set);
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);

#endif
