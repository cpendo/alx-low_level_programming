#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int rfile, wfile, r, w;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rfile = open(argv[1], O_RDONLY);
	if (rfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(rfile, buffer, BUFSIZ)) > 0)
	{
		w = write(wfile, buffer, r);
		if (wfile == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(rfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %d\n", rfile);
		exit(100);
	}
	if (close(wfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %d\n", wfile);
		exit(100);
	}
	return (0);
}
