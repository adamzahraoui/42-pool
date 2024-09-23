/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:29:48 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/16 16:30:25 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base2(int nbr, char *base_to);

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int x, int sign)
{
	int	base_value;
	int	result;
	int	base_len;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	result = 0;
	while (str[x] != '\0')
	{
		base_value = ft_in_base(str[x], base);
		if (base_value == -1)
			break ;
		result = result * base_len + base_value;
		x++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (!check(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (ft_atoi(str, base, i, sign));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (check(base_from) && check(base_to))
		return (ft_convert_base2(ft_atoi_base(nbr, base_from), base_to));
	else
		return (NULL);
}
