#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	char ppid_str[20]; /* Buffer to hold the PPID as a string*/
	int i, len;
	int j = 0;
	my_pid = getpid();

    /* Convert the PPID to a string manually */
    i = 0;
    do {
        ppid_str[i++] = '0' + (my_pid % 10);
        my_pid /= 10;
    } while (my_pid > 0);
    ppid_str[i] = '\n';

    /* Reverse the string to get the correct order */
    for (; j < i / 2; j++) {
        char temp = ppid_str[j];
        ppid_str[j] = ppid_str[i - j - 1];
        ppid_str[i - j - 1] = temp;
    }

    /* Calculate the length of the string */
    len = i + 1; /* Add 1 to include the newline character*/

    /* Use write to print the PPID string to stdout (file descriptor 1)*/
    write(1, ppid_str, len);

    return 0;
} /* END FUNCTION */

