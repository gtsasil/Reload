/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:21:21 by glsantos          #+#    #+#             */
/*   Updated: 2026/09/10 18:32:00 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("Before ft_swap: \n");
	printf("x = %d and y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After ft_swap: \n");
	printf("x = %d and y = %d\n", x, y);
}
*/