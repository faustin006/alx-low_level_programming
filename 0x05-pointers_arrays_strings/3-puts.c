#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string being printed
 *
 * Description: prints a string
 * Return: no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
