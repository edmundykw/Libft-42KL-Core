/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:39:11 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/05 11:30:58 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	ptr = s;
	i = ft_strlen((char *) s);
	while (i >= 0)
	{
		if (*(ptr + i) == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
