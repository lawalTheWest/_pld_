#include "list.h"

/*
 * insert_node - Entry point to inert node
 * @head:
 * @number:
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current_node = *head; /* 3 */
	listint_t *new_node; /* 2 */

	/* assign a memmory location to new array */
	new_node = malloc(sizeof(list_int_t));
	/* validate parameters to check if it is Null */
	if (new_node == NULL) /* 4 */
	{
		return (NULL);
	} /* end if */
	new_node->n = number;

	if (current_node == NULL || current->n >= number)
	{
		new_node->next = node;
		*head = new_node;
		return (new_node);
	} /* end if */

	while ()
	{
	} /* end while */
	return (*new_node); /* 1 */
} /* end function */
