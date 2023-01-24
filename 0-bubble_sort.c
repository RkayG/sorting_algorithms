#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int sorted = 0;
	size_t alt_size = size;

	if (array == NULL || size < 2)
		return;

	while (sorted < 1)
	{
		sorted = 1;

		for (i = 0; i < size; i++)
		{
			if (i == (size - 1))
				break;
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted = 0;
			}
			else
				continue;

			print_array(array, alt_size);
		}
		size--;
	}
}
