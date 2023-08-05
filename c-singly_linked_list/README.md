# SINGLY LINKED LIST
## Lawal Tajudeen ()
A singly linked list is a fundamental data structure in computer programming. It consists of a sequence of elements called nodes, where each node points to the next node in the list. Here's a step-by-step guide to help you get started with singly linked lists in C:

1. Define the Node structure:

```c language structure: (lawalTheWest)

struct Node
{
	int data;
    	struct Node* next_node;
}; /* end structure */

```

2. Create functions for basic operations:

   a. **Create a new Node:**

```c language node creation: (lawalTheWest)

struct Node* createNode(int data)
{
    	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    	newNode->data = data;
    	newNode->next_node = NULL;
    	return newNode;
} /* end function */

```

   b. **Insert a new Node at the beginning of the list:**
```c
void insertAtBeginning(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    newNode->next_node = *head;
    *head = newNode;
} /* end function */
```

   c. **Insert a new Node at the end of the list:**
```c
void insertAtEnd(struct Node** head, int data)
{
	struct Node* newNode = createNode(data);

	if (*head == NULL)
	{
        	*head = newNode;
        	return;
    	} /* end if */

	struct Node* current = *head;
	while (current->next_node != NULL)
	{
		current = current->next_node;
    	} /* end while */
	current->next_node = newNode;
} /* end function */
```

   d. **Delete a Node from the list:**
```c
void deleteNode(struct Node** head, int key)
{
	struct Node* temp = *head;
	struct Node* prev = NULL;

	if (temp != NULL && temp->data == key)
	{
        	*head = temp->next_node;
        	free(temp);
        	return;
    	} /* end if */

    	while (temp != NULL && temp->data != key)
	{
        	prev = temp;
        	temp = temp->next_node;
    	} /* end if */

    	if (temp == NULL)
	{
        	printf("Key not found in the list.\n");
        	return;
    	} /* end if */

    	prev->next_node = temp->next_node;
    	free(temp);
} /* end function */
```

   e. **Display the linked list:**
```c
void displayList(struct Node* head)
{
	struct Node* current = head;
	while (current != NULL)
	{
        	printf("%d -> ", current->data);
        	current = current->next_node;
    	}
    	printf("NULL\n");
} /* end function */
```

3. Test your functions in the main function:

```c
int main(void)
{
	struct Node* head = NULL;

    	insertAtEnd(&head, 10);
    	insertAtEnd(&head, 20);
    	insertAtEnd(&head, 30);

    	insertAtBeginning(&head, 5);

    	displayList(head);

    	deleteNode(&head, 20);

    	displayList(head);

    	return (0);
} /* end function */
```
******************************************************************
Remember to include the necessary header files like `stdio.h` and `stdlib.h` for using `printf`, `scanf`, and `malloc`.

This is just a basic implementation of a singly linked list. There are many other operations and optimizations you can do with linked lists.
