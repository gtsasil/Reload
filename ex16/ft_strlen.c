/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 19:12:13 by glsantos          #+#    #+#             */
/*   Updated: 2026/10/22 12:20:27 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	one[] = "Hello 42!";
	int		result;

	result = ft_strlen(one);
	printf("A string tem o tamanho de : %d\n", result);
}
*/