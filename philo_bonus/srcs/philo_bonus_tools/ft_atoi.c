/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:49:16 by hbouhsis          #+#    #+#             */
/*   Updated: 2022/06/23 01:49:18 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"philo_bonus.h"

int	ft_atoi(const char *str)
{
	unsigned long	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - 48);
		if (n > 9223372036854775807 && sign == 1)
			return (-1);
		if (n >= 9223372036854775807 && sign == -1)
			return (0);
		str++;
	}
	return (n * sign);
}
