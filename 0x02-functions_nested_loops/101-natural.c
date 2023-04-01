#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 and 5 less than 1021
 * Return: None
 */
int main(void)
{
	int sum, count;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
