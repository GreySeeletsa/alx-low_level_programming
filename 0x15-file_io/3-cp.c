#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *make_buff(char *file_name);
void c_file(int file_d);
/**
 * make_buff - read 1,024 bytes at a time from the file_from to
 * make less system calls
 * @file_name: name of buffer
 * Return: pointer
 */
char *make_buff(char *file_name)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", file_name);
		exit(99);
	}
	return (buff);
}
/**
 * c_file - closes file_d
 * @file_d: descriptor
 */
void c_file(int file_d)
{
	int cl;

	cl = close(file_d);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 * Description: if file_from does not exist, or if you can not read it,
 * exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 */
int main(int argc, char *argv[])
{
	int file_f;
	int file_t;
	int rd;
	int wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = make_buff(argv[2]);
	file_f = open(argv[1], O_RDONLY);
	rd = read(file_f, buff, 1024);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_f == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wrt = write(file_t, buff, rd);
		if (file_t == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(file_f, buff, 1024);
		file_t = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	c_file(file_f);
	c_file(file_t);

	return (0);
}
