#include "monty.h"
/**
 * f_mul - the top two elements are multiplied.
 * @head: the head of the stack
 * @counter: the actual line_number
 * Return: void
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int leng = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
