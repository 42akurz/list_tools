#include "../includes/list.h"

void	ft_addfront(t_list **head, char *str)
{
	t_list	*newNode;
	t_list	*temp;

	temp = *head;
	newNode = malloc(sizeof(t_list));
	newNode->data = ft_strdup(str);
	newNode->next = NULL;
	*head = newNode;
	newNode->next = temp;
	return ;
}
