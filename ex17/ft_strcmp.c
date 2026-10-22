/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glsantos <glsantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 13:58:56 by glsantos          #+#    #+#             */
/*   Updated: 2026/10/22 11:29:20 by glsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Abc";
	char	str4[] = "Def";
	char	str5[] = "Zebra";
	char	str6[] = "Abelha";
	char	str7[] = "Hello";
	char	str8[] = "Hello World";

	printf("Teste 1 (Iguais == ): %d\n", ft_strcmp(str1, str2));
	printf("Teste 2 (Menor <):  %d\n", ft_strcmp(str3, str4));
	printf("Teste 3 (Maior >):  %d\n", ft_strcmp(str5, str6));
	printf("Teste 4 (Tamanho): %d\n", ft_strcmp(str7, str8));
	return (0);
}
*/