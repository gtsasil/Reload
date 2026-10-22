/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:04 by glsantos          #+#    #+#             */
/*   Updated: 2026/10/22 12:13:49 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(int output, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(output, str[i]);
}
