/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:26:32 by glsantos          #+#    #+#             */
/*   Updated: 2026/09/24 11:04:32 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("A raiz eh : %d\n", ft_sqrt(25));
	printf("A raiz eh : %d\n", ft_sqrt(0));
	printf("A raiz eh : %d\n", ft_sqrt(-1));
	printf("A raiz eh : %d\n", ft_sqrt(81));
}
*/