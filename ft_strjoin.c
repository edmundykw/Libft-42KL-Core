/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:08:39 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/26 15:15:52 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	len1;
	unsigned int	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, len1);
	while (len2-- != 0)
	{
		*(ptr + len1) = *(char *) s2;
		len1++;
		s2++;
	}
	*(ptr + len1) = '\0';
	return (ptr);
}
