/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:32:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/28 12:59:43 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_atoi(const char	*nptr);
void	ft_bzero(void	*s, unsigned long	n);
int	ft_calloc(int	c);
int	ft_isalnum(int	c);
int	ft_isalpha(int	c);
int	ft_isascii(int	c);
int	ft_isdigit(int	c);
int	ft_isprint(int	c);
void	*ft_memchr(const void	*s, int	c, unsigned long	n);
int	ft_memcmp(int	c);
void	*ft_memcpy(void *restrict	dest, const void *restrict	src, unsigned long	n);
void	*ft_memmove(void	*dest, const void	*src, unsigned long	n);
void	*ft_memset(void	*s,	int c, unsigned long	n);
char	*ft_strchr(const char	*s, int	c);
int	ft_strdup(int	c);
unsigned long	ft_strlcat(char	*dest, const char	*src, unsigned long	size);
unsigned long	ft_strlcpy(char	*dest, const char	*src, unsigned long	size);
unsigned long	ft_strlen(const char *s);
int	ft_strncmp(const char	*s1, const char	*s2, unsigned long	size);
int	ft_strnstr(int	c);
char	*ft_strrchr(const char	*s, int	c);
int	ft_tolower(int	c);
int	ft_toupper(int	c);
int	ft_itoa(int	c);
int	ft_putchar_fd(int	c);
int	ft_putendl_fd(int	c);
int	ft_putnbr_fd(int	c);
int	ft_putstr_fd(int	c);
int	ft_split(int	c);
int	ft_striteri(int	c);
int	ft_strjoin(int	c);
int	ft_strmapi(int	c);
int	ft_strtrim(int	c);
int	ft_substr(int	c);

#endif
