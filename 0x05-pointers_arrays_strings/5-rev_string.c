#include "main.h"
#include <stdio.h>

/**
 * rev_string - reversing the string
 * @s: pointer to string
 *
 * Return 0
 */

void rev_string(char *s);
{
	int a, b, c, temp;

	a = 0;
	while (s[a] |= '\0')
	{
		a++;
	}
	b = 0;
	c = a - 1;

	while (b < c)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		b++;
		c--;
	}
}
