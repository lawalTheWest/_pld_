#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * Descritpion: 'working on linked list'
 */


/* creating a node */

int main(void)
{
	struct node *head = (struct node *)malloc(sizeof(struct node));
	struct node *new_node = malloc(sizeof(struct node));

	/* assign a value to the first node */
	head->data = 29;
	head->next_node_address = NULL;

	/* assign a value to the node */
	new_node->data = 90;
	new_node->next_node_address = NULL;
	/* update the link for the first node to point to the next */
	head->next_node_address = new_node;


	/* printing the addresses and the data  */
	printf("My data: %d\n"
		"My link: %p\n"
		"link to new node: %p\n",
		new_node->data,
		(void *)head,
		(void *)head->next_node_address);
	/* to confirm the address */
	printf("My address as a new node is:%p\n"
		"The address of the next node is: %p\n",
		(void *)new_node,
		(void *)new_node->next_node_address);

	return (0);
} /* end function */
