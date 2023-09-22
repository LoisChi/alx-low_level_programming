#include "lists.h"

/**
 * add_node - Entry point
 * @head: beginning of the node
 * @str: char
 * Return: address of the new element or Null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL || str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
