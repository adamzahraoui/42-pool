/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:36:12 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/15 01:22:10 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*p;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*p;

	i = 0;
	p = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!p)
		return (NULL);
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		if (!p[i].copy)
			return (NULL);
		i++;
	}
	p[i].str = 0;
	return (p);
}
