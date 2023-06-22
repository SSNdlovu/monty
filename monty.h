#ifndef MONTY_H
#define MONTY_H
#include <ctype.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * struct stack_s - stack representation of the doubly linked list
 * @n: the actual number
 * @prev: directs to the previous element
 * @next: directs to the next element
 * Description: doubly linked list node structure
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - the -args, file, line content variables
 * @arg: the actual value
 * @file: directs to the monty file
 * @content: the actual line content
 * @lifi: the flag change
 * Description: the values are carried through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - the function and the opcode
 * @opcode: the actual opcode
 * @f: the function used to handle the opcode
 * Description: opcode and its function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
char  *clean_line(char *content);
ssize_t getstdin(char **lineptr, int file);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);

#endif
