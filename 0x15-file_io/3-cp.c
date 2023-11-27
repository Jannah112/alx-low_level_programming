#include "main.h"
/**
 * cr_buf - hdhdhdjd
 * @a: bdhdj
 * Return: dhhd
 */
char *cr_buf(char *a)
{
	char *s;

	s = malloc(sizeof(char) * 1024);
	if (s == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}
	return (s);
}
/**
 * f_close - ejsjsk
 * @x: djjd
 */
void f_close(int x)
{
	int a;

	a = close(x);
	if (a == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}
/**
 * main - djdjdjdjd
 * @argc: hdjdjdjd
 * @argv: jdjdjdj
 * Return: djdjddj
 */
int main(int argc, char *argv[])
{
	int opf, opt, rf, wt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = cr_buf(argv[2]);
	opf = open(argv[1], O_RDONLY);
	rf = read(opf, buf, 1024);
	opt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (opf == -1 || rf == -1)
		{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
		}
		wt = write(opt, buf, rf);
		if (wt == -1 || opt == -1)
		{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);
		}
		rf = read(opf, buf, 1024);
		opt = open(argv[2], O_WRONLY | O_APPEND);
	} while (rf > 0);
	f_close(opt);
	f_close(opf);
	free(buf);
	return (0);
}

