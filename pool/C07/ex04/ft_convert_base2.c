/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:29:51 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/16 16:30:55 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nbr_size(int nb, int size)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / size;
		len++;
	}
	return (len);
}

char	*ft_itoi_base(int nbr, int size, char *base)
{
	char			*r;
	int				len;
	unsigned int	n;

	len = nbr_size(nbr, size);
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	r[len] = '\0';
	if (nbr == 0)
		r[0] = base[0];
	if (nbr < 0)
	{
		r[0] = '-';
		n = -nbr;
	}
	else
		n = nbr;
	while (n > 0)
	{
		r[--len] = base[n % size];
		n = n / size;
	}
	return (r);
}

char	*ft_convert_base2(int nbr, char *base_to)
{
	int	size2;

	size2 = 0;
	while (base_to[size2])
		size2++;
	return (ft_itoi_base(nbr, size2, base_to));
}
