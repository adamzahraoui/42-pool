/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 02:56:22 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/09 17:47:40 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*nb;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	nb = (int *)malloc(size * sizeof(int));
	if (!nb)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (i < size)
	{
		nb[i] = min + i;
		i++;
	}
	*range = nb;
	return (i);
}
