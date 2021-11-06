#include "../includes/list.h"

int	ft_compare(char	*s1, char *s2)
{
	int	ret;
	int	x;

	x = 0;
	ret = 0;
	while (ret == 0)
	{
		if (s1[x] == '\0')
			return (-1);
		if (s2[x] == '\0')
			return (1);
		ret = s1[x] - s2[x];
		x++;
	}
	return (ret);
}

void	ft_addorder(t_list **head, char *str)
{
	t_list	*newNode;
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *head;
	temp2 = *head;
	newNode = malloc(sizeof(t_list));
	newNode->data = ft_strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return ;
	}
	while (temp1 != NULL)
	{
		if (ft_compare(temp1->data, str) >= 1)
		{
			if (temp1 == *head)
				ft_addfront(head, str);
			else
			{
				temp2->next = newNode;
				newNode->next = temp1;
			}
			return ;
		}
		temp2 = temp1;
		temp1 = temp1->next;
	}
	ft_addback(head, str);
	return ;
}
