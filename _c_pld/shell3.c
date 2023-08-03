#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int ac, char *av[])
{
    FILE *stream;
    char *line = NULL;
    size_t length = 0;
    ssize_t bytes_read;
    char *tokens[BUFFER_SIZE];
    int cnt = 0;
    char *deli[] = {" ", "\t"};
    pid_t child;
    int status;
    char *token;

    if (ac < 2)
    {
        printf("Error: No file provided.\n");
        return -1;
    } /* end if */
    
    stream = fopen(av[1], "r");
    if (stream == NULL)
    {
        printf("Error: Failed to open file.\n");
        return -1;
    } /* end if */
    
    while (1)
    {
        printf("shell$ ");
        bytes_read = getline(&line, &length, stream);
        if (bytes_read == -1)
	{
            break;
        } /* end if */
        
        /* Tokenize the line*/
        cnt = 0;
        token = strtok(line, deli[0]);
        while (token != NULL && cnt < BUFFER_SIZE)
	{
            tokens[cnt++] = token;
            token = strtok(NULL, deli[0]);
        } /* end while */
        tokens[cnt] = NULL; 
	/* to Add NULL as the last element  */
        
        /* Fork*/
        child = fork();
        if (child < 0)
	{
            perror("fork");
            exit(EXIT_FAILURE);
        } /* end if */
	else if (child == 0)
	{
            /* Child process*/
            execve(tokens[0], tokens, NULL);
            perror("execve");
            exit(EXIT_FAILURE);
        } /* end else if */
	else
	{
            /* Parent process*/
            wait(&status);
        } /* end else */
    } /* end while */
    
    free(line);
    fclose(stream);
    return 0;
} /* end function */
