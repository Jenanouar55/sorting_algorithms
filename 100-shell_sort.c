#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - sorts an array of integers in ascending order using Shell sort
 * @array: array to sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t sup = 1, i, j;
	int tmp;

	while (sup < size / 3)
		sup = sup * 3 + 1;

	while (sup > 0)
	{
		printf("\n");
		print_array(array, size);

		for (i = sup; i < size; i++)
		{
			tmp = array[i];
			j = i;
			while (j >= sup && array[j - sup] > tmp)
			{
				array[j] = array[j - sup];
				j -= sup;
			}
			array[j] = tmp;
		}
		sup /= 3;
	}
	printf("\n");
	print_array(array, size);
}
