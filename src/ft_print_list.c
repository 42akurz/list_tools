#include "../includes/list.h"

void	ft_print_list(t_list *head)
{
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
}
