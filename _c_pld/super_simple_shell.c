https://codeshare.io/oQKXJB


</* Welcome onboard */
/*
 * This is the super simple shell program.
 */
/*************************************************************simple shell************************************************************/

/*
 * Algorithm
 */
/*
```
define a buffer - [1024]
use a loop to continously 
	prompt the user to imput command ---- 
  	prompt --- SuperSimpleShell$
	get input from user
  	tokenize the inputs to get the commands
  create a child process --- 
  (execve to run command)
  valiadate commands
  tell `ppid` to wait
  
```
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
  
#define buffer 1024
  /**
 * main - super simple shell
 * Return: 0
 */
int main(void)
{
  /* FILE *stream; */
  char *line = NULL;
  size_t length = 0;
  ssize_t bytes_read;
  char *token;
  char *tokens[buffer];
  int cnt = 0;
  pid_t child;
  int status;
  

  while(1)
  {
    printf("shell$ ");
    
    /* open a file */
    /* stream = fopen(av[1], "r"); */
  /*  stream = fopen("filename.txt", "w");
		if (stream == NULL)
 	 	{
    printf("Error: fopen operation failed\n");
  	return (-1);
	  } */

		/* read line */
    bytes_read = getline(&line, &length, stdin);
    if (bytes_read == -1)
    {
      perror("open");
      return (-1);
    } /* end if */
    if (bytes_read == -1)
    {
      break;
    } /* end if */
    
    /* tokenize */
		token = strtok(line, " \t");
    while (token != NULL)
    {
      tokens[cnt] = token;
      token = strtok(NULL, " \t");
      cnt++;
    }
    tokens[cnt] = NULL;
		
    /* Fork */
    child = fork();
    if (child == -1)
    {
    	perror("fork");
      return (-1);
    }
    if (child == 0)
    {
      execve("/bin/ls", tokens, NULL);
    }
    else
    {
      wait(&status);
    }
  }
  free(line);
  /* fclose(stream); */
  return (0);
} /* end function */
    
  

