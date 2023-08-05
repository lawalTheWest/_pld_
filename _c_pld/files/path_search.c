#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void search_files_in_path(const char *filename, const char *path)
{
	char *token;
	struct stat st;

	char *path_copy = strdup(path);

	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		size_t path_entry_length = strlen(token);
		char *full_path = malloc((path_entry_length + 1 + strlen(filename) + 1) * sizeof(char));
		strcpy(full_path, token);
		strcat(full_path, "/");
		strcat(full_path, filename);

		if (stat(full_path, &st) == 0 && S_ISREG(st.st_mode))
		{
			printf("%s: FOUND\n", full_path);
			free(full_path);
			free(path_copy);
			return;
		} /* end if */

		free(full_path);
		token = strtok(NULL, ":");
	} /* end while */

	free(path_copy);
	printf("%s: NOT FOUND\n", filename);
} /* end function */

int main(int argc, char *argv[])
{
	char *path = getenv("PATH");

	int i;
	
	if (argc < 2)
	{
		printf("Usage: %s filename ...\n", argv[0]);
		return 1;
	} /* end if */

	for (i = 1; i < argc; i++)
	{
		search_files_in_path(argv[i], path);
	} /* end for */

	return 0;
} /* end function */
