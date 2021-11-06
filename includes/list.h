#ifndef LIST_H
# define LIST_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	char			*data;
	struct s_list	*next;
}			t_list;

/* adds element to the end of a list */
void	ft_addback(t_list **head, char *str);

/* adds element to the front of a list */
void	ft_addfront(t_list **head, char *str);

/* adds element in alphabetical order to a list */
void	ft_addorder(t_list **head, char *str);

/* deletes element from a list */
void	ft_delelement(t_list **head, char *str);

/* prints a list */
void	ft_print_list(t_list *head);

/* frees the list */
void	ft_free_list(t_list **head);

/* requirded helpers from my libft */
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *s1);

#endif