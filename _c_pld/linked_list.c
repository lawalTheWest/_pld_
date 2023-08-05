#include <stdio.h>
#include <stdlib.h>
/**
 * Descritpion: 'working on linked list'
 */


/* creating a node */

struct node
{
	int data;
	struct node *next_node_address;
}; /* end struct */

int main(void)
{
	struct node *head = (struct node *)malloc(sizeof(struct node));

	head->data = 29;
	head->next_node_address = NULL;

	printf("My data: %d\n", head->data);
	return (0);
} /* end function */
