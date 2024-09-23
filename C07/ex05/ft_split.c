/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:29:54 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/12 11:36:29 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char	*sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char	*src, char	*sep)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (src[i])
	{
		while (src[i] != '\0' && is_sep(src[i], sep))
			i++;
		if (src[i] != '\0')
			cont++;
		while (src[i] != '\0' && !is_sep(src[i], sep))
			i++;
	}
	return (cont);
}

int	count_word_sep(char	*src, char	*sep)
{
	int	i;

	i = 0;
	while (src[i] && !is_sep(src[i], sep))
		i++;
	return (i);
}

char	*ft_strcpy(char	*src, char	*sep)
{
	char	*dest;
	int		i;
	int		sw;

	i = 0;
	sw = count_word_sep(src, sep);
	dest = malloc((sw + 1) * sizeof(char));
	while (i < sw)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char	*str, char	*charset)
{
	char	**ptr;
	int		index;

	ptr = malloc((count_word(str, charset) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	index = 0;
	while (*str)
	{
		while (*str != '\0' && is_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			ptr[index] = ft_strcpy(str, charset);
			index++;
		}
		while (*str && !is_sep(*str, charset))
			str++;
	}
	ptr[index] = 0;
	return (ptr);
}
