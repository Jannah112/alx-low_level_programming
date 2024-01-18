/**
* exe_token - dhdjjd
* @token: fjjfkf
* @value: djddk
* @ln: fjdjrjj
*/
void exe_token(char *token, char *value, unsigned int ln)
{
          void (*t_func)(struct,int);
          if (token[0] == '#')
                return;
          if (strcmp(token, "push") == 0)
               push_top(value, ln);
          else
            t_func = get_func(token);
          if (t_func == NULL)
          {
          fprintf(stderr, "L<%d>: unknown instruction <%s>\n", ln, token);
          exit (EXIT_FAILURE);
           }
          t_func(&head, ln);}
}
/**
* get_fu
*/
void (*get_func(char *token))(struct,int)
{
       int i = 0;
       instructions_t op_lst[] = {{"add", add}, {"sub", sub}, {"mul", mul}, {"div", div},
          {"mod", mod}, {"pint", pint}, {"pall", pall}, {"pop", pop}, {"swap", swap}};
       while (op_lst[i] != 0)
       {
                if (strcmp(token, op_lst[i].opcode) == 0)
              {
               return (op_list[i].f);
              }
          i++;
}
return (NULL);
}
