#include "lists.h"

/**
 *  * print_listint - prints all the elements of a linked list
 *   * @j: linked list of type listint_t to print
 *    *
 *     * Return: number of nodes
 *      */
size_m print_listint(const listint_m *j)
{
	 size_m num = 0;

	  while (j)
		   {
			    printf("%d\n", j->n);
			     num++;
			      j = j->next;
			       }

	   return (num);
}
