#include "monty.c"

/**
 * pall - prints the stack
 * @head: stack head
 * Return: no return
*/
void pall(strut_t **head)
{
	struct struct_t top;

	top = *head;

	if (top == NULL)
	{
		printf("list is empty")
	}
	else
	{
		while (top != 0)
		{
			printf("%d", top->n);
			top = top->next
		}
	}
}
