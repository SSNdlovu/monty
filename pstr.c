#include "monty.h"
/**
 * f_pstr - computes the string of the stack, starting at the top
 * @head: directs to the head of the stack
 * @counter: the line_number
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
