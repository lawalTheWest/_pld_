#include <unistd.h>

/*
 * main - Entry point
 * Description: 'prints all the arguments, without using ac'
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int index0 = 1; /* counter */
	int index1 = 0; /* counter */

	/* to silence the argc warning on the gcc flags */
	(void)argc;

	/* loop through the arguments */
	for  (; (!(argv[index0] == NULL)); index0++)
	{
		while (!(argv[index0][index1] == '\0'))
		{
			write(STDOUT_FILENO, &argv[index0][index1], 1);
			index1++;
		} /* end while  */
	}/* end for */
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}/* END FUNCTION */
