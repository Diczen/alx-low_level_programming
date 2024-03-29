#include "lists.h"
/**
 * free_listp2 - frees a linked list
 * @head: head of a list
 * Return: no return
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *headcopy;

	if (head != NULL)
	{
		headcopy = *head;
		while ((temp = headcopy) != NULL)
		{
			headcopy = headcopy->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: head of a list
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listp_t *ptr, *new, *add;
	listint_t *headcopy;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (i);
			}
		}

		headcopy = *h;
		*h = (*h)->next;
		free(headcopy);
		i++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (i);
}

