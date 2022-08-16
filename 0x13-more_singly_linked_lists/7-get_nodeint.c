#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: head of a list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *savepoin;
	int savenum;

	if (*head != NULL)
	{
		savepoin = (*head)->next;
		savenum = (*head)->n;
		free(*head);
		*head = savepoin;
		return (savenum);
	}
	else
	{
		return (0);
	}
}

