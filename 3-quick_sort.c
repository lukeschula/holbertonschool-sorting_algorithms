#include "sort.h"
/**
 * partition - this partitions the array and swaps
 * @array: input array
 * @lower: lower index
 * @upper: upper index
 * @size: size of array
 * Return: return the partioned index
 */
int partition(int *array, int lower, int upper, size_t size)
{
	int pvt, hldr, x, y;

	pvt = array[upper];
	x = lower - 1;
	y = lower;
	while (y < upper)
	{
		if (array[y] <= pvt)
		{
			x++;
			if (x != y)
			{
				hldr = array[x];
				array[x] = array[y];
				array[y] = hldr;
				print_array(array, size);
			}
		}
		y++;
	}
	if (pvt < array[x + 1])
	{
		hldr = array[x + 1];
		array[x + 1] = array[upper];
		array[upper] = hldr;
		print_array(array, size);
	}
	return (x + 1);
}
/**
 * recursive_sort - sorting the array using recursion
 * @array: input array
 * @lower: low index
 * @upper: upper index
 * @size: input size of array
 */
void recursive_sort(int *array, int lower, int upper, size_t size)
{
	int z;

	if (lower < upper)
	{
		z = partition(array, lower, upper, size);
		recursive_sort(array, lower, z - 1, size);
		recursive_sort(array, z + 1, upper, size);
	}
}
/**
 * quick_sort - sory array using quick sort method
 * @array: input array
 * @size: input size of array
 */
void quick_sort(int *array, size_t size)
{

	size_t lower, upper;

	if (size == 0 || size == 1)
		return;
	lower = 0;
	upper = size - 1;
	recursive_sort(array, lower, upper, size);
}
