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
}              t_arg;

int	ft_isdigit(int arg);
int is_number(char *str);
int	check_arguments(char **argv);
size_t	ft_strlen(const char *s);
#endif