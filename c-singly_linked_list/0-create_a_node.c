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

	head->data = 29;
	head->next_node_address = NULL;

	printf("My data: %d\n", head->data);
	return (0);
} /* end function */
