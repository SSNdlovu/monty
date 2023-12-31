#include "monty.h"
/**
 * f_swap - +s da up 2 ele of da stak
 * @head: stac00k kop
 * @counter: line_num
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
