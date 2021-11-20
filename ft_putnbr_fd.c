/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:08:44 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/20 20:28:05 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	placement;

	placement = 0;
	if (n == 0)
		return (0);
	if (n == -2147483648)
		n += 1;
	if (n * -1 >= 0)
	{
		n *= -1;
		placement++;
	}
	while (!(n >= 1 && n <= 9))
	{
		n /= 10;
		placement++;
	}
	return (placement);
}

static int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

static void	positive(int n, int fd)
{
	int		placement;
	int		power;
	char	s;

	placement = count(n) + 1;
	power = ft_recursive_power(10, placement - 1);
	while (power > 0)
	{
		s = 48 + (n / power);
		write(fd, &s, 1);
		n -= ((n / power) * power);
		power /= 10;
	}
}

static void	negative(int n, int fd)
{
	int		placement;
	int		power;
	int		i;
	char	s;

	i = n;
	placement = count(n) + 1;
	power = ft_recursive_power(10, placement - 2);
	if (n == -2147483648)
		i += 1;
	i *= -1;
	write(fd, "-", 1);
	while (power > 0)
	{
		if (n == -2147483648 && power == 1)
			i += 1;
		s = 48 + (i / power);
		write(fd, &s, 1);
		i -= ((i / power) * power);
		power /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		negative(n, fd);
	else
		positive(n, fd);
}
