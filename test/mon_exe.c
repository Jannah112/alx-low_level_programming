/**
* exe_token - dhdjjd
* @token: fjjfkf
* @value: djddk
* @ln: fjdjrjj
*/
void exe_token(char *token, char *value, unsigned int ln)
{
  void (*t_func)(struct,int);
          if (token == "push")
          { push_top(value);}
           else:{
          t_func = get_func(token);
          if (t_func == NULL)
          {
                fprintf(stderr, "L<%d>: unknown instruction <%s>\n", ln, token);
                exit (EXIT_FAILURE);
           }
          t_func(&head, ln);}
}
