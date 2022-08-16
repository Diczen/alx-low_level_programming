#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a list
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *head2;
	listint_t *prev;

	head2 = head;
	prev = head;
	while (head && head2 && head2->next)
	{
		head = head->next;
		head2 = head2->next->next;

		if (head == head2)
		{
			head = prev;
			prev =  head2;
			while (1)
			{
				head2 = prev;
				while (head2->next != head && head2->next != prev)
				{
					head2 = head2->next;
				}
				if (head2->next == head)
					break;

				head = head->next;
			}
			return (head2->next);
		}
	}

	return (NULL);
}

