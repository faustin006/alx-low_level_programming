#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints arguments a program receives
 *
 * argc: argument number
 * argv: argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
