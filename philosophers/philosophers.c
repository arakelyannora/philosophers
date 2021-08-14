/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <narakely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:57:03 by narakely          #+#    #+#             */
/*   Updated: 2021/08/14 17:27:59 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}

int is_number(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_arguments(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 5)
	{
		if (check_arguments(argv))
		{	
			printf("Usage: ./philo number_of philosophers time_to_die time_to_eat time_to_sleep");
				return (1);
		}
	}
	else {
		printf("Usage: ./philo number_of philosophers time_to_die time_to_eat time_to_sleep");
		return (1);
	}
	return (0);
}