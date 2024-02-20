#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Affecter un nombre aleatoire a n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d est positif\n", n);
	else if (n < 0)
		printf("%d est nÃgatif\n", n);
	else
		printf("%d est zÃro\n", n);

	return (0);
}
