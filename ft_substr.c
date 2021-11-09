/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:17:31 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/09 17:04:44 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *source, size_t start, size_t end)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	i = 0;
	j = end - start;
	ptr = (char *)malloc(sizeof(*source) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	while (*(char *)(source + start) != '\0')
	{
		*(ptr + i) = *(char *)(source + start);
		i++;
		source++;
	}
	*(ptr + i) = '\0';
	return(ptr);
}
