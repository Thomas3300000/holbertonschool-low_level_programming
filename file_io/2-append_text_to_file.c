#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointers to the file
 * @text_content: string adding to the end file
 *
 * Return: -1 if NULL and not permission user write or 1 for sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{
		}
		wr = write(op, text_content, len);
	}
	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
