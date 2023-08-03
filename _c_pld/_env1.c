#include <stdio.h>
/* #include <stdlib.h>
#include <unistd.h>
*/
extern char **environ;

int main(void)
{
  char **env = environ;
  
  while(!(*env == NULL))
  {
    printf("%s\n", *env);
    env++;
  } /* end while */
  return (0);
} /* end function */
