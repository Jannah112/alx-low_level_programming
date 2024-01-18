int main(int argc, char *argv[])
{
	FILE *aloom;
	char *input = NULL, *token = NULL, *value = NULL;
	size_t size = 0;
   int ln = 1;
	ssize_t num_chars = 0;

   	if (argc != 2 || argc == 0)
   	{
		fprintf(stderr, "Usage: monty file\n");
		exit (EXIT_FAILURE);
   	}
   	aloom = fopen(argv[1], "r");
   	if (aloom == NULL)
   	{
		fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
   	}
	while((num_chars = getline(&input, &size, aloom)) != EOF)
	{
		 token = strtok(input, " \n");
       value = strtok(NULL, " \n");
       if (token == NULL && value == NULL)
          {
                 ln++;
                continue;
           }
       exe_token(token, value, ln);
       ln++;
	}
	fclose(aloom);
	return 0;
}
