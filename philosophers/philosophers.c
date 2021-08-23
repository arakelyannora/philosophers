/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <narakely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:57:03 by narakely          #+#    #+#             */
/*   Updated: 2021/08/23 19:33:16 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
int ft_string_to_int(char *str)
{
    int num;
    
	num = 0;
    if (ft_strlen(str) > 10)
        return (-1);
    while (*str)
    {
		if (!(ft_isdigit(*str)) || (num == 214748364 && (*str) - 48 > 7))
			return (-1);
		num = num * 10 + ((*str) - 48);
		str++;
    }
    return (num); 
}
int	init_arg(char **argv, t_arg *arg)
{
	arg->num_of_philos = ft_string_to_int(argv[1]);
	if (arg->num_of_philos == -1)
		return (-1);
	arg->time_to_die = ft_string_to_int(argv[2]);
	if (arg->time_to_die == -1)
		return (-1);
	arg->time_to_eat = ft_string_to_int(argv[3]);
	if (arg->time_to_eat == -1)
		return (-1);
	arg->time_to_sleep = ft_string_to_int(argv[4]);
	if (arg->time_to_sleep == -1)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_arg *arg;
	if (argc == 5)
	{
		if (check_arguments(argv))
		{	
			printf("Usage: ./philo number_of_philosophers time_to_die time_to_eat time_to_sleep");
				return (1);
		}
		if (init_arg(argv, arg) == -1)
		{
			printf("Error: arguments should be less than max int value");
			return (1);
		}
	}
	else {
		printf("Usage: ./philo number_of_philosophers time_to_die time_to_eat time_to_sleep");
		return (1);
	}
	return (0);
}