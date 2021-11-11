/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:17:31 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/11 10:19:32 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *source, size_t start, size_t size)
{
	unsigned int	i;
	char			*ptr;

	if (ft_strlen((char *) source) <= (int) start)
		return (NULL);
	ptr = (char *)malloc(sizeof(*source) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*(char *)(source + start) != '\0' && size-- != 0)
	{
		*(ptr + i) = *(char *)(source + start);
		i++;
		start++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
