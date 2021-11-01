/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:18:24 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/01 14:23:27 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n-- != 0)
	{
		*ptr = *(unsigned char *) src;
		ptr++;
		src++;
	}
	return (dest);
}
