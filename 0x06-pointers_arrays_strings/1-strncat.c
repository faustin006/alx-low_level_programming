#include "main.h"

/**
 * @strncat - concatenates two strings but adds an inputted number of bytes
 * @dest: appended string
 * @src: dtring to be completed at end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest _len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len] = src[index];

	return (dest);

}
