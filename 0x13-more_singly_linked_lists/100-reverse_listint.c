#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head of a list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *headcopy, *savepoin;

	if (*head != NULL && (*head)->next != NULL)
	{
		headcopy = *head;
		savepoin = (*head)->next;
		(*head)->next = NULL;
		*head = savepoin;
		while ((*head)->next != NULL)
		{
			savepoin = (*head)->next;
			(*head)->next = headcopy;
			headcopy = *head;
			(*head) = savepoin;
		}
		(*head)->next = headcopy;
	}
	return (*head);
}

