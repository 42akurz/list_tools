#include "../includes/list.h"

void	ft_addback(t_list **head, char *str)
{
	t_list	*newNode;
	t_list	*last;

	last = *head;
	newNode = malloc(sizeof(t_list));
	newNode->data = ft_strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	return ;
}
