#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *headcopy;
	size_t n;

	headcopy = *head;

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
	for (n = 0; new->str[n] != '\0'; n++)
		;
	new->len = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (headcopy->next != NULL)
		{
			headcopy = headcopy->next;
		}
		new->next = (headcopy)->next;
		(headcopy)->next = new;
	}
	return (*head);
}

