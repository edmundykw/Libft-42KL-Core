/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:50:50 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/26 15:03:15 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	front_trim(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;

	i = 0;
	index = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				index++;
			j++;
		}
		if (index > i)
			i++;
		else
			i = ft_strlen(s1);
	}
	return (index);
}

static unsigned int	back_trim(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		index = i;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				index--;
			j++;
		}
		if (i > index)
			i--;
		else
			i = 0;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*ptr;
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return (ft_strdup(""));
	start = front_trim(s1, set);
	end = back_trim(s1, set);
	len = end - start + 1;
	if (start > len)
		len = 1;
	ptr = ft_substr(s1, start, len);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
