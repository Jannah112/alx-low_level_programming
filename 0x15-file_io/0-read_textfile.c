#include "main.h"
/**
 * read_textfile - djdhdhhddj
 * @filename: hdjdjdjdj
 * @letters: riririri
 * Return: djdjdj
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t x, y, z;

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		free(s);
		return (0);
	}
	y = read(x, s, letters);
	if (y == -1)
	{
		free(s);
		return (0);
	}
	z = write(STDOUT_FILENO, s, y);
	if (z == -1 || z != y)
	{
		free(s);
		return (0);
	}
	free(s);
	return (z);
}
