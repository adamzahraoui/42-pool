/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:44:07 by adzahrao          #+#    #+#             */
/*   Updated: 2024/09/02 21:57:43 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	r = 0;
	j = 0;
	if (ft_strlen(dest) < size)
		r = ft_strlen(dest) + ft_strlen(src);
	else
		return (ft_strlen(src) + size);
	while (dest[i])
		++i;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (r);
}
