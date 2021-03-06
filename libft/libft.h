/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 16:45:30 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 16:45:42 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void			ft_lstreduce(t_list *list, void (*f)(void *a, t_list *b, void *opts), void *val, void *opts);
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_cpyrev(t_list *orig);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstaddlast(t_list **list, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstiter2(t_list *lst, void (*f)(t_list *elem, void *args), void *mem);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s, const void *s2, size_t len);
void			*ft_memalloc(size_t size);
void			*ft_memdel(void **ap);

size_t			ft_nbrsize(int nbr);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_issep(char c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
char			*ft_strrm(char const *s, char c, size_t n);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const*s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
 void		 	ft_putstr_utf8(int *str);
int				ft_putchar_utf8(int str);

char			*ft_strdup(const char *s1);
char			*ft_strndup(const char *s1, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_stpncpy(char *dst, const char *src, size_t len);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *hay, const char *nee, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmpi(const char *s1, const char *s2);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);

int				ft_strsplit_len(char **str);
char			**ft_strsplit(char const *s, char c);
void			ft_free_strsplit(char **str);
int				ft_strany(char c, char*str);

unsigned int	ft_fact(unsigned int nb);
char			**ft_all_perms(char *s);
char			*ft_swapchar(char *s, int ind1, int ind2);
char			*ft_rotate(const char *s, int rotation);
void			ft_print_2d(char **matrix);

int				get_next_line(int fd, char **line);

int		ft_max(int one, int two);
int		ft_min(int one, int two);


#endif
