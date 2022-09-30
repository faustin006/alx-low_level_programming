#include "main.h"

/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, and a maximum inputted number of bytes.
 * If the source string length is less than the maximum byte number,
 * the rest of the destination string is filled with null bytes
 * Similar to the standard library function `strncpy`.
 * @dest: buffer storing the string copy
 * @src:the source string
 * @n:max nummber of byte copied
 * Return: the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
