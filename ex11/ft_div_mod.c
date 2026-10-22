/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:41:07 by glsantos          #+#    #+#             */
/*   Updated: 2026/09/10 18:32:01 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 10;
	y = 2;
	div = 0;
	mod = 0;
	printf("Before ft_swap: int div and int mod = 0\n");
	ft_div_mod(x, y, &div, &mod);
	printf("After ft_swap: int div = 5 and int mod = 0\n");
	printf("%d / %d = %d\n", x, y, div);
	printf("The rest of the divison of %d by %d is %d", x, y, mod);
	return (0);
}
*/