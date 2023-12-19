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

		for (b = a + 1; b < size; b++)
		{
			if (array[m_vlue] > array [b])
				m_vlue = b;
		}
		if (m_vlue != a)
		{
			swapped(&array[m_vlue], &array[a]);
			print_array(array, size);
		}
	}
}
/**
 *
 */
void swapped(int *s, int *t)
{
	int r = *s;

	*s = *t;
	*t = r;
}
