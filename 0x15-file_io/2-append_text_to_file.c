#include "main.h"
/**
 * append_text_to_file - hdhdhdjdj
 * @filename: hdjdj
 * @text_content: djdkdj
 * Return: rjrje
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		y = write(x, text_content, strlen(text_content));
	else
		y = write(x, text_content, 0);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
