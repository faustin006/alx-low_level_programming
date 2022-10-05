#include <stdlib.h>
#include <stdio.h>

/**
 * wordnos - counts no of words in a given string
 * @s: pointer to the string
 *
 * Return: no of words in the string (int)
 */

char *argstostr(int ac, char **av)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings (sucess)
 * or NULL (error)
 */

