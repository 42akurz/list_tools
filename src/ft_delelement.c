#include "../includes/list.h"

void	ft_delelement(t_list **head, char *str)
{
	t_list	*temp;
	t_list	*prev;

	prev = NULL;
	temp = *head;
	while (temp != NULL)
	{
		if (ft_strncmp(str, temp->data, ft_strlen(str)) == 0
			&& ft_strlen(str) == ft_strlen(temp->data))
		{
			if (prev == NULL)
				*head = temp->next;
			else
				prev->next = temp->next;
			free(temp->data);
			free(temp);
			return ;
		}
		prev = temp;
		temp = temp->next;
	}
	return ;
}
