/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:46:52 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/10/27 14:02:33 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	base_conv;

	i = 0;
	sign = 1;
	base_conv = 0;
	while ((str[i] != '+' && str[i] != '-') && (str[i] < '0' || str[i] > '9'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i - 1] != '\e')
	{
		base_conv = base_conv * 10 + (str[i] - '0');
		i++;
	}
	return (base_conv * sign);
}
