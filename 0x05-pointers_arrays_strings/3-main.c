#include "main.h"

/**
 * puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void puts(char *str)
{

	while (*str != "\0")
	{
		putchar(*str++);
	}
	putchar("\n");
}
