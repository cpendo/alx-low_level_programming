#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	i = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, i);
	close (file);
	free(buffer);

	return (i);
}
