#include "main.h"

int main(void)
{
	size_t buffer = 0;
	ssize_t bytes_read;
	char *line;
	File *target_file;

	line = NULL;

	/* open a file for reading */
	target_file = fopen("target_file.txt", "r+");

	/* validate */
	if (target_file == NULL)
	{
		perror("Error accessing the file");
		return (-1);
	} /* end if */

	/* now we read the file */
	while (!(bytes_read = _getline(&line, &buffer, target_file)) == -1)
	{
		if (bytes_read > 0)
		{
			printf("%s", line);
		} /* end if */
	} /* end while */

	/* close file */
	fclose(target_file);

	free(line);

	return (0);

} /* end function */
