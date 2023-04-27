#include "lists.h"

/**
 * print_list - print a list
 *
 * @h: list header
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int i = 0;

	for (; p != NULL; p = p->next)
	{
		if (p->str != NULL)
		{
			printf("[%u] %s", p->len, p->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		i++;
		putchar('\n');
	}

	return (i);
}
