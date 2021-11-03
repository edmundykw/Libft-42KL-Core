/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:29:42 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/03 17:18:39 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = dst;
	i = ft_strlen((char *) src);
	j = ft_strlen((char *) dst);
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst < src)
	{}
	ft_memcpy(dst, src, len);
	return (dst);
}
