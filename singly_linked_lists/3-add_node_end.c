#include "lists.h"

/**
 * add_node_end - add new node at the end
 * @head: beginig node
 * @str: pointe with the address
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int n;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	newNode->len = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
