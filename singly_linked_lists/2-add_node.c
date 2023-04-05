#include "lists.h"
/**
 * add_node -  adds a new node
 * @head: Pointer with the address
 * @str: Pointer address of the string
 * Return: adress of the node created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
