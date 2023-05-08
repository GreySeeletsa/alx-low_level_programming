#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to
 * POSIX standard output
 * @filename: pointer
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * otherwise 0 if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d;
	ssize_t actual_num;
	ssize_t rd;
	char *buffer;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(file_d, buffer, letters);
	actual_num = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(file_d);
	return (actual_num);
}
