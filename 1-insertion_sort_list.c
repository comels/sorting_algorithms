#include "sort.h"
/**
 * insertion_sort_list - function that sorts
 * a doubly linked list of integers in ascending order using
 * the Insertion sort algorithm
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	temp = (*list)->next;

	while (temp)
	{
		while (temp->prev && temp->n < temp->prev->n)
		{
			temp->prev->prev = temp;
			temp->prev = temp->prev->prev;
			temp->next = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;

			print_list(*list);
		}

		temp = temp->next;
	}
}
