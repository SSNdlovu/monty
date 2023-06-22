#include "monty.h"
/**
 * * free_stack - free a double link ls
 * * @head: kop of da sta
 * */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
														}
}
