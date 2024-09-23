/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 01:28:08 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/18 08:49:37 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_recursive(int n, int start, int j, int *com)
{
	int		i;
	char	c;

	if (j == n)
	{
		i = 0;
		while (i < n)
		{
			c = com[i] + '0';
			write(1, &c, 1);
			i++;
		}
		if (com[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		com[j] = i;
		ft_print_combn_recursive(n, i + 1, j + 1, com);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	com[10];

	if (n > 0 && n < 10)
		ft_print_combn_recursive(n, 0, 0, com);
}
