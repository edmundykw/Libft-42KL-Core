/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:21:15 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/04 14:33:59 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	ptr = s;
	i = ft_strlen((char *) s);
	while (i + 1 != 0)
	{
		if (*ptr == c)
			return ((char *) s);
		ptr++;
		s++;
		i--;
	}
	return (NULL);
}
