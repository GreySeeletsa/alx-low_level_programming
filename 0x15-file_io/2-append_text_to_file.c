#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of file
 * @filename: is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn;
	int rd;
	int length;

	length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	opn = open(filename, O_WRONLY | O_APPEND);
	rd = write(opn, text_content, length);

	if (opn == -1 || rd == -1)
		return (-1);

	close(opn);
	return (1);
}
