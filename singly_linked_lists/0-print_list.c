#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: Adress of the head of the list to print
 * Return: Unsigned int with the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		j++;
		h = h->next;
	}
	return (j);
}
