#include "./includes/list.h"

int	main(void)
{
	t_list	*head;
	t_list	*sorted;

	head = NULL;
	ft_addback(&head, "pie");
	ft_addback(&head, "burger");
	ft_addback(&head, "apple");
	ft_addback(&head, "fries");
	ft_addback(&head, "sauce");
	printf("UNORDERED LIST:\n");
	ft_print_list(head);
	while (head != NULL)
	{
		ft_addorder(&sorted, head->data);
		head = head->next;
	}
	printf("ORDERED LIST:\n");
	ft_print_list(sorted);
	ft_free_list(&sorted);
	ft_free_list(&head);
}
