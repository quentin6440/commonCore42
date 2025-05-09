/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:45:12 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/04/06 01:26:29 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
void	*content;
struct s_list	*next;
}		t_list;

#ifndef LIBFT_H
# define LIBFT_H

//# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_toupper(int c);
int	ft_atoi(const char *nptr);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
t_list	*ft_lstnew(void *content);
#endif
