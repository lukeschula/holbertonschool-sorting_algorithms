#include "sort.h"
/**
 * insertion_sort_list - insertion sorting algorithm integers
 * @list: the head of the linked list
 * Return: nothing in-place algorithm
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;
	ptr = *list;
	while ( ptr->next)
	{
		if (ptr->n > ptr->next->n)
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
			
				swapping_next(ptr);
			else
				swapping_none(ptr);
			print_list(*list);
			while (ptr->prev)
				ptr = ptr->prev;
			continue;
		}
		ptr = ptr->next;
	}
}
/**
 * swapping_prev_next - swaps the prev and next pointers
 * @ptr: pointer to struct
 */
void swapping_prev_next(listint_t *ptr)
{
        ptr->next->prev = NULL;
        ptr->prev = ptr->next, ptr->next = NULL;
        ptr->prev->next = ptr;
}
/**
 * swapping_prev - swaps the prev and next pointers
 * @ptr: pointer to struct
 */
void swapping_prev(listint_t *ptr)
{
        ptr->prev = ptr->next;
        ptr->next->next->prev = ptr;
        ptr->next->prev = NULL;
        ptr->next = ptr->next->next;
        ptr->prev->next = ptr;
}
/**
 * swapping_next - swaps the prev and next pointers
 * @ptr: pointer to struct
 */
void swapping_next(listint_t *ptr)
{
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        ptr->next->next = ptr;
        ptr->prev = ptr->next, ptr->next = NULL;
}
/**
 * swapping_none - swaps the prev and next pointers 
 * @ptr: pointer to struct
 */
void swapping_none(listint_t *ptr)
{
        ptr->next->prev = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next->next->prev = ptr;
        ptr->next->prev->next = ptr->next;
        ptr->next = ptr->next->next;
        ptr->prev->next = ptr;
}
		
