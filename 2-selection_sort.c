#include "sort.h"
/**
 *
 *
 *
 */
void help_quick_sort(int *array, int l, int r, size_t size)
{
	int pvt;

	if (l >= r || l < 0)
		return;
	pvt = part(array, l, r, size)
	help_quick_sort(array, l, pvt -1, size);
	help_quick_sort(array, pvt + 1, r, size);
}
/**
 *
 *
 */

