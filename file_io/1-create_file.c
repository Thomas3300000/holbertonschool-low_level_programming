#include "main.h"

/**
 * create_file -  function that creates a file
 * @filename: pointers to the file
 * @text_content: pointer to a string to write
 *
 * Return: 1 for the succes or -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
		}
		wr = write(op, text_content, len);
	}
	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
