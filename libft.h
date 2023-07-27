/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:15:18 by oreshetn          #+#    #+#             */
/*   Updated: 2023/07/27 14:26:57 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	size_t			content_size;
}					t_list;

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
				void (*del)(void *));
size_t			ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(const char *str);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_lstsize(t_list *lst);
char			*ft_strnstr(const char *haystack, const char *needle, \
				size_t len);
char			*ft_itoa(int n);
char			*ft_strnew(size_t size);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strdup(const char *s1);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			*ft_memchr(const void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memset(void *b, int c, int len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_lstadd_back(t_list **lst, t_list *newnode);
void			ft_lstadd_front(t_list **lst, t_list *newnode);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
size_t			ft_strlen(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif
