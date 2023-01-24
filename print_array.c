#include "sort.h"

/**
 * print_array - print elements of an array
 * @array: integer array
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
	size_t j;

	for (j = 0; j < size; j++)
	{
		printf("%d", array[j]);
		
		if (j < (size - 1))
			printf(", ");
	}
	printf("\n");
}
