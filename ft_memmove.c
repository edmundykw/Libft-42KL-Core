/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:29:42 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/04 10:46:52 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest < src)
	{
		while (len-- != 0)
		{
			*ptr = *(unsigned char *) src;
			ptr++;
			src++;
		}
	}
	else
	{
		while (len-- != 0)
		{
			*(ptr + len) = *(unsigned char *)(src + len);
		}
	}
	return (dest);
}
