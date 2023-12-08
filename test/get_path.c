#include "shell.h"
/**
 * get_path - hjj
 * @input: ghj
 * Return: huu
 */
char *get_path(char *input)
{
	char *path = NULL, *path_cp = NULL, *file_path;
	int input_len, dir_len;
	char *seperator = ":";
	char *path_tok = NULL;
	struct stat buf;

	path = our_getenv("PATH");
	if (path)
	{
		path_cp = strdup(path);
		input_len = strlen(input);
		path_tok = strtok(path_cp, seperator);
		while (path_tok != NULL)
		{
			dir_len = strlen(path_tok);
			file_path = malloc(input_len + dir_len + 2);
			strcpy(file_path, path_tok);
			strcat(file_path, "/");
			strcat(file_path, input);
			strcat(file_path, "\0");
			if (stat(file_path, &buf) == 0)
			{
				free(path);
				free(path_cp);
				return (file_path);
			}
			else
			{
				free(file_path);
				path_tok = strtok(NULL, ":");
			}
		}
	}
	free(path);
	free(path_tok);
	free(path_cp);
	if (stat(input, &buf) == 0)
		return (input);
	return (NULL);
}
