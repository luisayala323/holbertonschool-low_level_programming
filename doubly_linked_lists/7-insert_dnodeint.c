#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in a dlistint_t list.
 * @h: Pointer to a pointer to the head node of the list.
 * @idx: Index of the list where the new node
 * should be added (starting from 0).
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	prev_node = *h;
	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
		prev_node = prev_node->next;
	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	if (prev_node->next != NULL)
		prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
