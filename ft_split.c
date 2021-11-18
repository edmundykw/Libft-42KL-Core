/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:13:05 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/18 09:36:34 by ekeen-wy         ###   ########.fr       */
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
			if (*ptr == c || (k > 0 && ptr == (s + j)))
				k++;
		}
		ptr++;
	}
	return (k);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(*ptr) * (ft_strlen((char *) s) + 1));
	if (sizeof(ptr) < sizeof(s) || ptr == NULL)
		return (NULL);
	while (s[i] != '\0' && len-- > 0)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			**ptr;

	if (s == NULL)
		return (NULL);
	ptr = ft_calloc(word_count((char *) s, c) + 1, sizeof(*ptr));
	j = ft_strlen((char *) s);
	k = 0;
	while (*s != '\0')
	{
		i = 0;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			i++;
			if (*(s + i) == c || (k > 0 && s == (s + j)))
				ptr[k++] = ft_strndup((char *) s, i);
		}
		s++;
	}
	*(ptr + k) = NULL;
	return (ptr);
}
