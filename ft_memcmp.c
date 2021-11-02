/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:14:59 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/02 15:33:01 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- != 0)
	{
		if (*(unsigned char *) s1 != *(unsigned char *) s2)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);
	}
	return (0);
}
