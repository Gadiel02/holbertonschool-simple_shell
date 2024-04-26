#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - PPID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t parent_pid;

    pid_t pid = fork();

    if (pid < 0)
	{
        perror("Fork failed");
        return 1;
    }
	else if (pid == 0)
	{
        parent_pid = getpid();
        printf("%u (Child)\n", parent_pid);
    }
	else
	{
        parent_pid = getpid();
        printf("%u (Parent)\n", parent_pid);
    }

    return 0;
}

