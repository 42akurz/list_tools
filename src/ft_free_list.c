#include "../includes/list.h"

void	ft_free_list(t_list **head)
{
	t_list	*temp;

	while ((*head) != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp->data);
		free(temp);
	}
}