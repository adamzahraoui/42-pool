/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:46:28 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/11 01:13:46 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_in_base(char c, char	*base)
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

int	ft_atoi(char	*str, char	*base, int x, int sign)
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
		result = result * base_len + base_value;
		x++;
	}
	return (result * sign);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	i = 0;
	result = 0;
	base_len = 0;
	sign = 1;
	if (!check_base(base))
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
