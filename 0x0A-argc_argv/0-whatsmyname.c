# include <stdio.h>

/**
 * main - writing a program that prints its name
 * when renamed it will print the new name without compiling again
 * should not remove the path before the name
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s/n", argv[0]);
	(void)argc;

	return (0);
}
