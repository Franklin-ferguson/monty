#include "monty.h"

/**
 * add_new_node - add node to the head stack
 * @head: head of the stack
 * @x: new_value
 * Return: no return
*/
void add_new_node(stack_t **head, int x)
{
	struct struct_t *top = 0;
	struct struct_t *new_node;

	top = *head

	new_node = (struct struct_t *)malloc(sizeof(struct struct_t));
	if (new_node == NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}
	if (top)
	{
		new_node->n = x;
		new_node->next = *head
		new_node->prev = NULL;
		*head = new_node;
	}
}
