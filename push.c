#include "monty.h"
/**
 * f_push - A node is added to the stack
 * @head: points to the head of the stack
 * @counter: the actual line_number
 * Return: void
*/
void f_push(stack_t **head, unsigned int counter)
{
	int nn, jj = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jj++;
		for (; bus.arg[jj] != '\0'; jj++)
		{
			if (bus.arg[jj] > 57 || bus.arg[jj] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	nn = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, nn);
	else
		addqueue(head, nn);
}
