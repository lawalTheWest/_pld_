#include <stdio.h>
#include <string.h>

extern char **environ;

int _strlen(const char *name);
char *_getenv(const char *name);


int main(void)
{
	char *the_path = _getenv("PATH");

	if (!(the_path == NULL))
	{
		printf("the path: %s\n", the_path);
	} /* end if */
	else
	{
		printf("not found");
	} /* end else */
	return (0);
} /* end function */

char *_getenv(const char *name)
{
	/* to get the lenght of the name parameter */
	int lenght = _strlen(name);
	char **env;

	/*
	 * loop through the environ
	 * array to find a match for
	 * the parameter
	 */
	for (env = environ; *env != NULL; env++)
	{
		if (strncmp(name, *env, lenght) == 0 && (*env)[lenght] == '=')
		{
			return &((*env)[lenght + 1]);
		} /* end if */
	} /* end for */
	return (NULL);
} /* End function */

int _strlen(const char *name)
{
	int lenght = 0;
	/* iterate to get the lenght */
	while (!(name[lenght] == '\0'))
	{
		lenght++;
	} /* end while */

	/* return lenght */
	return (lenght);
} /* end function */
