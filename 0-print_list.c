#include <stdio.h>
#include "lists.h"

/**
 * print_list - list all the element in a linked list
 *@b: pointer to the list_t list to print
 *
 * Return: the number printed
 */
size_t print_list(const list_t *b)
{
 size_t v = 0;
 while (b)
 {
	 if (!b->str)
	printf("[0] (nil)\n");
	 else
		 printf("[%u] %s\n", b->len, b->str);
	 b = b->next;
	 v++;
 }
 return (v);
}
