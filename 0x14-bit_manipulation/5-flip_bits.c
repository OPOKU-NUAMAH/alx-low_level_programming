#include "main.h"

/**
 * flip_bits - returns the numb of bits you would
 * need to flip to get from one numb to another
 * @n: numb one.
 * @m: numb two.
 *
 * Return: numb of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
