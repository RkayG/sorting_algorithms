#include "sort.h"

/**
 * print_list - prints elements of a doubly linked list
 * @list - list to be printed
 */
void print_list(listint_t *list)
{
	while (list)
	{
		printf("%d", list->n);
		if (list->next != NULL)
			printf(", ");
		list = list->next;
	}
	printf("\n");
}
