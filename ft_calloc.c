/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:35:29 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/10 13:05:45 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned long	i;
	unsigned int	j;

	i = nmemb * size;
	j = 0;
	if (i > __INT_MAX__ || i % 2 != 0)
		return (NULL);
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (ptr);
	while (nmemb-- > 0)
	{
		*(unsigned int *)(ptr + j) = 0;
		j++;
	}
	return (ptr);
}
