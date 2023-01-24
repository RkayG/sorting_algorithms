#include "sort.h"

int partition(int *array, int start, int end, size_t size);
void quicksort(int *array, int start, int end, size_t size);
void quick_sort(int *array, size_t size);

/**
 * partition - partitions an array into sub-arrays using Lomuto's scheme
 * @array: array to be partitioned
 * @start: leftmost index of array
 * @end: rightmost index of array
 * @size: size of array
 *
 * Return: position of pivot
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i = start, j, temp;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (i);
}

/**
 * quicksort - sorts an array of integers in ascending order recursively
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @start: leftmost index of array
 * @end: rightmost index of array
 * @size: size of array
 */
void quicksort(int *array, int start, int end, size_t size)
{
	int pi;

	if (start < end)
	{
		pi = partition(array, start, end, size);
		quicksort(array, start, pi - 1, size);
		quicksort(array, pi + 1, end, size);
	}
}

/**
 * quick_sort - quick sorts an array
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
