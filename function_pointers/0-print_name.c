#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string to print
 * @f: pointers function
 *
 * Return: string to name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
