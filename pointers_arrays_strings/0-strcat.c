#include "main.h"

/**
 * *_strcat - check the code
 * @dest: string source
 * @src: string concatenates
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)

	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
