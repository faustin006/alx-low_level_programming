#include "main.h"
#include <stdio.h>

/**
 * rev_string - reversing the string
 * @s: string to be reversed
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
