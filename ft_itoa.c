/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:11:19 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/20 13:20:20 by ekeen-wy         ###   ########.fr       */
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

static char	*positive(int n)
{
	int		placement;
	int		power;
	char	*ptr;

	placement = count(n) + 1;
	power = ft_recursive_power(10, placement - 1);
	ptr = (char *)malloc(sizeof(char) * (placement + 1));
	if (ptr == NULL)
		return (NULL);
	while (power > 0)
	{
		*(ptr++) = 48 + (n / power);
		n -= ((n / power) * power);
		power /= 10;
	}
	*ptr = '\0';
	return (ptr - placement);
}

static char	*negative(int n)
{
	int		placement;
	int		power;
	int		i;
	char	*ptr;

	i = n;
	placement = count(n) + 1;
	power = ft_recursive_power(10, placement - 2);
	ptr = (char *)malloc(sizeof(char) * (placement + 1));
	if (ptr == NULL)
		return (NULL);
	if (n == -2147483648)
		i += 1;
	i *= -1;
	*(ptr++) = '-';
	while (power > 0)
	{
		if (n == -2147483648 && power == 1)
			i += 1;
		*(ptr++) = 48 + (i / power);
		i -= ((i / power) * power);
		power /= 10;
	}
	*ptr = '\0';
	return (ptr - placement);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n < 0)
	{
		ptr = negative(n);
		if (ptr == NULL)
			return (NULL);
	}
	else
	{
		ptr = positive(n);
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
