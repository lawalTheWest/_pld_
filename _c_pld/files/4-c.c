#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printDirectoriesInPath();

int main()
{
	printDirectoriesInPath();
	return 0;
} /* end function main */

void printDirectoriesInPath()
{
	char *path = getenv("PATH");
	char *token;

	if (path == NULL)
	{
		printf("PATH environment variable not found.\n");
		return;
	} /* end if */

	/* tokenize  */
	*token = strtok(path, ":");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	} /* end while */
} /* end function */
