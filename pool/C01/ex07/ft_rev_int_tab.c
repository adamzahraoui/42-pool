/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:18:46 by adzahrao          #+#    #+#             */
/*   Updated: 2024/08/29 12:17:15 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	j;

	i = 0 ;
	while (i < size / 2)
	{
		j = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = j;
		i++;
	}
}
