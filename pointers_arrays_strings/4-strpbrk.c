#include "main.h"

/**
 * *_strpbrk -  function that searches a string for any of a set of bytes
 * @s: string to find
 * @accept: string mesuread
 * Return: characters egal else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
