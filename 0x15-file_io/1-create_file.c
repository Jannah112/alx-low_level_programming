#include "main.h"
/**
 * create_file - djdjdidi
 * @filename: ruriiir
 * @text_content: didiri
 * Return: hddjdj
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, i;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len++;
		}
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, len);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
