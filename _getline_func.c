#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _getline - entry point to print a line
 *
 * Return: (bytes read)
 */

ssize_t _getline(char **linePtr, size_t *buff_size, FILE *my_file)
{
	ssize_t bytes_read = 0;
	size_t index = 0;
	ssize_t result;
	char *newSizePtr = NULL;

	while (1)
	{
		if (index >= *buff_size)
		{
			*buff_size += 8;
			newSizePtr = realloc(*linePtr, *buff_size);
			if (newSizePtr == NULL)
			{
				perror("Memory allocation error");
				return -1;
			} /* end if */
			*linePtr = newSizePtr;
		} /* end if */

		result = read(fileno(my_file), &((*linePtr)[index]), 1);
		if (result == -1)
		{
			perror("Error reading file");
			return -1;
		} /* end if */
		else if (result == 0)
		{
			break;
		} /* end else if */
		bytes_read++;

		if ((*linePtr)[index] == '\n')
		{
			break;
		} /* end if */

		index++;
	}/* end while  */
	return bytes_read;
	/* free(newSizePtr); */
} /* END FUNCTION */
