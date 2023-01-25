#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array to be sorted
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (interval = size / 2; interval > 0; interval /= 2)
	{
		for (i = interval; i < size; i += 1)
		{
			temp = array[i];

			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
