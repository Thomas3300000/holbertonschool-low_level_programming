#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL if failed, empty string if NULL or s3 new space memory
 */
char *str_concat(char *s1, char *s2)
{
	int cpt1, cpt2, a, b;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (cpt1 = 0; s1[cpt1] != '\0'; cpt1++)
	{
	}
	for (cpt2 = 0; s2[cpt2] != '\0'; cpt2++)
	{
	}

	s3 = malloc((sizeof(char) * (cpt1 + cpt2)) + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		s3[a] = s1[a];
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
		s3[a + b] = s2[b];
	}

	s3[a + b] = '\0';

	return (s3);
}
