#include "main.h"

/**
 * read_textfile - reads a textfile
 * prints it to the POSIX standard output
 * @filename: file to print
 * @letters: is the number of letters it should print and read
 * Return: @letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	int b, c;
	char *s;

	if (!filename)
		return (0);
	a = open(filename, O_RDONLY);
	if (a < 0)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (!s)
		return (0);
	b = read(a, s, letters);
	if (b < 0)
	{
		free(s);
		return (0);
	}
	s[b] = '\0';
	close(a);
	c = write(STDOUT_FILENO, s. b);
	if (c < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (c);
}
