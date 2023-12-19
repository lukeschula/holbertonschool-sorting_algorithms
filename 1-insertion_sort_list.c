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
	while ( ptr->next)
	{
		if (ptr->n > temp->next->n)
		{
			if (ptr->next->next == NULL && ptr->prev == NULL)
			{
				swapping_prev_next(ptr);
				*list = ptr->prev;
			}
			else if (ptr->prev == NULL)
			{
				swapping_prev(ptr);
				*list = ptr->prev;
			}
			else if (ptr->next->next == NULL)
			{
				swapping_next(ptr);
			else
				swapping_none(ptr);
			print_list(*list);

			


		
