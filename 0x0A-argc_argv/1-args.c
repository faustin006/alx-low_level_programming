#include <stdio.h>

/**
 * main - prints number of arguments passed
 *
 * argc: argument count
 * argv: argument vector
 *
 * Return: 0
 */

int main(int args, char argc[])
{
	printf("%d\n", args - 1);
	(void)argv;

	return (0);
}
