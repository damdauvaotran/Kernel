#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int value = 5;
int main()
{
    printf("\nBefore fork()");
    pid_t pid;
    pid = fork();
    if (pid < 0)
    { //error occurred
        fprintf(stderr, "\n Fork failed");
    }
    else if (pid == 0)
    {
        value += 15;
        printf("\nChild: value = %d\n", value);
        return 0;
    }
    else if (pid > 0)
    {
        wait(NULL);
        printf("\nParent value = %d", value);
        return 0;
    }
}