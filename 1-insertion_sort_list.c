#include "sort.h"
/**
 *
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr;

	if (list == NULL || (*list)->next == NULL)
		return;
	ptr = *list;
		
