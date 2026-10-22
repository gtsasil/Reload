/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:07:13 by glsantos          #+#    #+#             */
/*   Updated: 2026/10/22 11:54:14 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = malloc(range * sizeof(int));
	if (!d)
		return (0);
	index = 0;
	while (index < range)
	{
		d[index] = min + index;
		index++;
	}
	return (d);
}
