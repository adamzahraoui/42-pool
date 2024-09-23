/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:15:26 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/09 18:03:17 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*nb;

	if (min >= max)
		return (NULL);
	else
	{
		size = max - min;
		nb = (int *)malloc(size * sizeof(int));
		i = 0;
		while (i <= size)
		{
			nb[i] = min + i;
			i++;
		}
		return (nb);
	}
}
