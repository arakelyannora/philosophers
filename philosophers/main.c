#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void* funct()
{
    printf("Hello from funct\n");
    return (0);
}

int main()
{

    pthread_t thread;
    int status;
    int status_addr;

    if ((status = pthread_create(&thread, NULL, funct, NULL)) != 0)
    {
        printf("thread error\n");
        exit (1);
    }
    status = pthread_join(thread,  );
    if (status != 0)
    {
        printf("thread_join error\n");
        exit (1);
    }
    printf("Hello from main\n");
    return (0);
}