/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:15:55 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/04 08:46:40 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checke_base(char	*base)
{
	int	j;
	int	i;
	int	size;

	size = ft_strlen(base);
	if (size < 2)
		return (-1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (size);
}

void	ft_print_nbr(int nb, char	*base, int size)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_print_nbr(-(nb / size), base, size);
			ft_putchar(base[-(nb % size)]);
		}
		else
		{
			ft_putchar('-');
			ft_print_nbr(-nb, base, size);
		}
	}
	else if (nb < size)
		ft_putchar(base[nb]);
	else
	{
		ft_print_nbr(nb / size, base, size);
		ft_putchar(base[nb % size]);
	}
}

void	ft_putnbr_base(int nb, char	*base)
{
	int	size ;

	size = checke_base(base);
	if (size == -1)
		return ;
	else
		ft_print_nbr(nb, base, size);
}
