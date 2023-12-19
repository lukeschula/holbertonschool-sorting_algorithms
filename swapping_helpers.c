#include "sort.h"
/**
 *
 *
 *
 */
void swapping_prev_next(listint_t *ptr)
{
	ptr->next->prev = NULL;
	ptr->prev = ptr->next, ptr->next = NULL;
	ptr->prev->next = ptr;
}
/**
 *
 *
 *
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
 *
 *
 *
 */
void swapping_next(listint_t *ptr)
{
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	ptr->next->next = ptr;
	ptr->prev = ptr->next, ptr->next = NULL;
}
/**
 *
 *
 *
 */
void swapping_none(listint_t *ptr)
{

