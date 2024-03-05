#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to checked
 * @accept: prefix mesuread
 *
 * Return: numbers bytes egal
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				count++;
				break;
			}
		}
		if (s[b] == '\0')
			return (count);
	}
	return (count);
}
