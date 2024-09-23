/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:13:24 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/05 15:47:18 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbr_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2)
		return (2);
	if (ft_nbr_prime(nb) == 0)
	{
		while (ft_nbr_prime(nb) == 0)
			nb++;
	}
	return (nb);
}
