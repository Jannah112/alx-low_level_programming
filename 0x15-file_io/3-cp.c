#include "main.h"
/**
 * main - djdjdjdjd
 * @argc: hdjdjdjd
 * @argv: jdjdjdj
 * Return: djdjddj
 */
int main(int argc, char *argv[])
{
	int opf, opt, rf, wt, e, er;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	opf = open(argv[1], O_RDONLY);
	rf = read(opf, buf, 1024);
	opt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (opf == -1 || rf == -1)
		{
		dprintf(STDOUT_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
		}
		wt = write(opt, buf, rf);
		if (wt == -1 || opt == -1)
		{
		dprintf(STDOUT_FILENO, "Error: Can't write to%s\n", argv[2]);
		exit(99);
		}
		rf = read(opf, buf, 1024);
		opt = open(argv[2], O_WRONLY | O_APPEND);
	} while (rf > 0);
	e = close(opf);
	if (e == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd%d\n", opf);
		exit(100);
	}
	er = close(opt);
	if (er == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd%d\n", opt);
		exit(100);
	}
	return (0);
}

