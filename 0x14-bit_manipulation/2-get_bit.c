#include "main.h"

 /**
  * get_bit - gets value of a bit at an index
  * @n: bit
  * @index: given index
  *
  * Return: value of the bit at index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return 	(0);

	return (1);
}
