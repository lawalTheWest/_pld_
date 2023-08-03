#include "main.h"

/**
 * main - Entry point
 * Return: (0)
 */

int main(void)
{
	char *read_line = NULL;
	size_t buff_size = 0;
	ssize_t bytes_read;

	while (1)
	{
		write(STDOUT_FILENO, "Lawal The West$ ", 16);

		bytes_read = _getline(&read_line, &buff_size, stdin);
		if (bytes_read == -1)
		{
			break;
		} /* end if */
		write(STDOUT_FILENO, read_line, bytes_read);
	} /* end while */
	free(read_line);
	return (0);
} /* END FUNCTION */
