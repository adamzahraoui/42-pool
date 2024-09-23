/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:19:06 by adzahrao          #+#    #+#             */
/*   Updated: 2024/08/29 12:37:06 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0 ;
	while (i <= size - 1)
	{
		j = 0 ;
		while (j < size - 1)
		{
			if (tab[i] < tab[j])
			{
				x = tab[i];
				tab[i] = tab[j];
				tab[j] = x;
			}
			j++;
		}
		i++;
	}
}
