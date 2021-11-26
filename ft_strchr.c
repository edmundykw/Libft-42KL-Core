/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:21:15 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/26 14:56:25 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;

	i = ft_strlen(s);
	while (i + 1 != 0)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
		i--;
	}
	return (NULL);
}
