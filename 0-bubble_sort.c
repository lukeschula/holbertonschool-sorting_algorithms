#include "sort.h"
/**
 * bubble_sort - sorting algorithm
 * @array: array of numbers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y = 0;
	int sw;

	if (!array)
		return;

	for (x = 0; x < size; x++)
	{

		for (y = 0; y < size - x - 1; y++)
		{

			if (array[y] > array[y + 1])
			{
				sw = array[y];
				array[y] = array[y + 1];
				array[y + 1] = sw;
				print_array(array, size);
			}
		}
	}
}
