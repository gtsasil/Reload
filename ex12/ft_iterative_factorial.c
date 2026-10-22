/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:19:19 by glsantos          #+#    #+#             */
/*   Updated: 2026/09/24 10:12:52 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	factorial;

	result = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (factorial <= nb)
	{
		result *= factorial;
		factorial++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Fatorial de 5: %d\n", ft_iterative_factorial(5));
	return (0);
}
*/