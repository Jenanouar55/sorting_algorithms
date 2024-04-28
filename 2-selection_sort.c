#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_id;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_id = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_id])
				min_id = j;
		}
		if (min_id != i)
		{
			temp = array[i];
		array[i] = array[min_id];
		array[min_id] = temp;
		print_array(array, size);
		}
	}
}
