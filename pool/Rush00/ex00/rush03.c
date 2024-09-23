/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:40:33 by mel-hajj          #+#    #+#             */
/*   Updated: 2024/08/31 15:33:06 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 || j == y) && i == 1)
				ft_putchar('A');
			else if ((j == 1 || j == y) && i == x)
				ft_putchar('C');
			else if ((j == 1 || j == y) && i != 1 && i != x)
				ft_putchar('B');
			else if ((j != 1 && j != y) && (i == 1 || i == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		if (x != 0)
			ft_putchar('\n');
		j++;
	}
}
