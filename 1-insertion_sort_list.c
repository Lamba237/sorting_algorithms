#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of
 * integers in ascending order
 * using the Insertion sort algorithm.
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		temp = current;

		while (prev != NULL && prev->n > temp->n)
		{
			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;

			print_list(*list);
			prev = temp->prev;
		}

		current = current->next;
	}
}
