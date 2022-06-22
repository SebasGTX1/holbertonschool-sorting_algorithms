#include "sort.h"

/**
 * swap_nodes - swap two nodes
 * @node_1: first node
 * @node_2: second node
 * @list: linked list
 * Return: no return
 */

void swap_nodes(listint_t *node_1, listint_t *node_2, listint_t **list)
{
	node_2->next = node_1->next;
	node_1->prev = node_2->prev;
	if (node_2->prev)
		node_2->prev->next = node_1;
	if (node_1->next)
		node_1->next->prev = node_2;
	node_2->prev = node_1;
	node_1->next = node_2;
	if (!node_1->prev)
		*list = node_1;
	print_list(*list);
}
/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 * @list: linked list to be sorted
 * Return: no return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = *list;
	while (current)
	{
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			swap_nodes(current, prev, list);
			prev = current->prev;
		}
		current = current->next;
	}
}
