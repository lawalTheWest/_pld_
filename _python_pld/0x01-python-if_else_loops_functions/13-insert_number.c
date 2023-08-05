#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/*
 * insert_node ;- Entry point
 * @head:
 * @number:
 * Return: (NULL) || 
 */
listint_t *insert_node(listint_t **head, int number)
{
	/* declkare variables */
	listint_t *new_node;
	listint_t *current_node = *head;

	/* traversing --- */
	while (current_node->next && (current_node->next->n < number))
	{
		current_node = current_node->next;
	} /* end while */
	new_node = malloc(sizeof(listint_t));

	/* validating parameters */
	if (new_node == NULL)
	{
		return (NULL);
	} /* end if */

	new_node->n = number;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
} /* End function */
