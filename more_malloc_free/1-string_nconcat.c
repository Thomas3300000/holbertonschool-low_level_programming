#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * followed by the first n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: number octet to concatenates of string 2
 *
 * Return: s1 + s2[n]
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cpt1, cpt2, a, b;
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

	for (b = 0; s2[b] != '\0' && b < n; b++)
	{
		s3[a + b] = s2[b];
	}

	s3[a + b] = '\0';

	return (s3);
}
