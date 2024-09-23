/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:45:27 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/05 14:09:09 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	p;

	r = 1;
	p = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (p <= nb)
		{
			r = r * p;
			p++;
		}
		return (r);
	}
	else
		return (0);
}
