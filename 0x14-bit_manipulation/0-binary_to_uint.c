#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 *
 * @b: Pointer to string of chars
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *Q)
{
	signed int index = 0, num = 0;


	if (!Q)
		return (0);

	while (Q[index] != '\0')
	{
		if (Q[index] != '0' && Q[index] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (Q[index] & 1)
		{
			num += 1;
		}
		index += 1;
	}
	return (num);
}
