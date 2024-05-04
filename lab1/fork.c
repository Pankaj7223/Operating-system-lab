#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()

{

    int pid, c1, c2;

    c1 = fork();

    if (c1 == 0)

    {
        printf("pid number of child c1 is %d\n", getpid());
        printf("pid number of parent of c1 is %d\n", getppid());
    }

    else
    {
        wait(NULL);

        c2 = fork();
        if (c2 == 0)
        {

            printf("pid number of second child is Sid %d\n", getpid());

            printf("pid number of parent of 2 is dyn %d\n", getppid());
        }

        else

        {

            wait(NULL);

            printf("pid of parent process is %d\n", getpid());
        }
    }
    return 0;
}
