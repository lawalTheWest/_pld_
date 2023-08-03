#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
        char **my_env = environ;

        if (ac < 1)
        {
                printf("Error: Too few arguments\n");
                return (-1);
        }

        if (av == NULL)
        {
                return (-1);
        }

        printf("%p\n", (void *)&my_env);
        printf("%p\n", (void *)&env);

        return (0);
}
