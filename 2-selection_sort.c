#include "sort.h"
/**
 *
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, m_vlue;

	if (size < 2)
		return;
	for (a = 0; a < size; a++)
	{
		m_vlue = a;
