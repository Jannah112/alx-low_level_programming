#include "shell.h"

void tok(char *input, char *p_name)
{
	char *input_tok = NULL, *tok_cpy = NULL;
	char *token = NULL, *delim = " \n";
	char **argv;
	int tok_num = 0, i = 0, x = 0;

	input_tok = malloc(sizeof(char) * strlen(input));
	malloc_return(input_tok);
	strcpy(input_tok, input);
	tok_cpy = strdup(input);
	token = strtok(input_tok, delim);
	while(token)
	{
		if (strcmp(token , " ") == 0)
			token = strtok(NULL, delim);
		else
		{
			tok_num++;
			token = strtok(NULL, delim);
		}
	}
	if (tok_num == 0)
	{
		free(input_tok);
		free(tok_cpy);
		free(input);
		return;
	}
	tok_num++;
	argv = malloc(sizeof(char *) * tok_num);
	malloc_return(*argv);
	token = strtok(tok_cpy, delim);
	while (token)
	{
		argv[i] = malloc(sizeof(char)* strlen(token));
		malloc_return(argv[i]);
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	x = executes(argv);
	if (x == 2)
		printf("%s: %s: command not found\n", p_name, argv[0]);
	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(input);
	free(argv);
	free(tok_cpy);
	free(token);
	free(input_tok);
	}
