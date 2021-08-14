#ifndef PHILOSOPHERS_H
    # define PHILOSOPHERS_H
    # include <stdio.h>
    # include <pthread.h>

typedef struct s_arg
{
    int num_of_philos;
    int time_to_die;
    int time_to_eat;
    int time_to_sleep;
}              arg;
#endif