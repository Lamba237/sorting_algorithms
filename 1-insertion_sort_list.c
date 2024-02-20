#include "sort.h"
/**
 * insertion_sort_list - a function that
 * sorts a doubly linked list of integers
 * in ascending order using the Insertion sort
 * @list: list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node = (*list)->next;
	listint_t *previous = NULL;
	listint_t *node = *list;

	if (!list || !(*list) || !(*list)->next)
		return;
	while (current_node)
	{
		while (node && node->n < current_node->n)
		{
			previous = node;
			node = node->next;
		}
		if (previous && previous != current_node)
		{
			if (previous->prev)
			{
				previous->prev->next = current_node;
			}
			else
			{
				*list = current_node;
			}
			current_node->prev = previous->prev;
			previous->next = current_node->next;
			if (current_node->next)
			{
				current_node->next->prev = previous;
			}
			current_node->next = previous;
			previous->prev = current_node;

			print_list(*list);
		}
		current_node = current_node->next;
	}
}
