/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:13:05 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/16 23:20:40 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	word_count(char *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != c && (*(s + i + 1) == c || *(s + i + 1) == '\0'))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			**ptr;

	if (s == NULL)
		return (NULL);
	ptr = ft_calloc((word_count((char *) s, c) + 1), sizeof(ptr));
	i = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		if (*(s + i) != c)
		{
			while (*(s + i + j) != c)
				j++;
			*(ptr + k) = ft_substr((char *) s, i, j);
			i += j;
			k++;
		}
		i++;
	}
	*(ptr + k) = NULL;
	return (ptr);
}
