#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: string to  checked
 * @c: characters to find
 *
 * Return: s if c is find or NULL is not find
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
