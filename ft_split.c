/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:13:05 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/17 21:10:47 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	word_count(char *s, char c)
{
	char			*ptr;
	unsigned int	j;
	unsigned int	k;

	j = ft_strlen((s));
	k = 0;
	ptr = s;
	while (*ptr != '\0')
	{
		while (*ptr != c && *ptr != '\0')
		{
			ptr++;
			if (*ptr == c)
				k++;
			if (k > 0 && ptr == (s + j))
				k++;
		}
		ptr++;
	}
	return (k);
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
