/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:25:38 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/17 19:29:53 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char *sep, char c)
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

int	ft_strlen(char *str, int *i, char *sep)
{
	int	start;

	start = *i;
	while (str[*i] && !is_sep(sep, str[*i]))
		(*i)++;
	return (*i - start);
}

void	ft_strcpy(char *src, char *ptr, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		ptr[i] = src[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
}

int	count_word(char *src, char *sep)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (src[i])
	{
		while (src[i] && is_sep(sep, src[i]))
			i++;
		if (src[i] && !is_sep(sep, src[i]))
		{
			cw++;
			while (src[i] && !is_sep(sep, src[i]))
				i++;
		}
	}
	return (cw);
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	int		index;
	int		i;
	int		start;

	p = malloc((count_word(str, charset) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] && is_sep(charset, str[i]))
			i++;
		if (str[i])
		{
			start = i;
			p[index] = malloc((ft_strlen(str, &i, charset) + 1) * sizeof(char));
			if (!p[index])
				return (NULL);
			ft_strcpy(str, p[index++], start, i);
		}
	}
	p[index] = NULL;
	return (p);
}
