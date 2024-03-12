#include "main.h"

/**
 * *_strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to copied
 *
 * Return: NULL if failed  else return sttrin copied
 */
char *_strdup(char *str)
{
	int cpt;
	int a;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (cpt = 0; str[cpt] != '\0'; cpt++)
	{
	}

	b = malloc(sizeof(char) * cpt + 1);

	if (b == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < cpt; a++)
	{
		b[a] = str[a];
	}

	return (b);
}
