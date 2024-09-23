/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 08:56:14 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/09 17:56:14 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_all_len(int size, char	**strs, char	*sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

void	ft_strcut(char	*dest, char	*src, int *index)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[*index] = src[j];
		(*index)++;
		j++;
	}
	dest[*index] = '\0';
}

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	char	*p;
	int		i;
	int		index;

	index = 0;
	if (size == 0)
	{
		p = (char *)malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	p = (char *)malloc(ft_str_all_len(size, strs, sep) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcut(p, strs[i++], &index);
		if (i < size)
			ft_strcut(p, sep, &index);
	}
	p[index] = '\0';
	return (p);
}
