#include "main.h"
/**
 * create_file - djdjdidi
 * @filename: ruriiir
 * @text_content: didiri
 * Return: hddjdj
 */
int create_file(const char *filename, char *text_content)
{
	int x, y;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, strlen(text_content));
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
