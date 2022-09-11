#insert <stdio.h>

/**
 * main - print single digit numbers of base ten
 *
 * Description: using the main function to print
 * Return: 0
 */
int main (void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
