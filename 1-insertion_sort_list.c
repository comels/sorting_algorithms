#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	tmp = (*list)->next;
	while (tmp)
	{
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;

			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;

			else
			{
				tmp->prev->next = tmp;
			}
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
