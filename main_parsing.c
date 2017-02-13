/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/13 20:27:12 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <locale.h>
#include <wchar.h>

int	main(void)
{
	setlocale(LC_ALL, "");
//	printf("%d\n", ft_printf(""));
//	printf("%d\n", printf("okcestcool"));
//	printf("%d\n", ft_printf("bgfko%&)^&()", "COUCOU"));
//	printf("%d\n", ft_printf("Bonjour %s yeee on est bien", "maxime"));
//	printf("%d\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis, ils sont a %s 43", "Maxime", "Aymeric", "lecole"));
//	printf("%d\n", printf("Yo, %s et son ami %s sont de tres bons amis, ils sont a %s 42 et CEST %s", "Maxime", "Aymeric", "lecole", "cool"));
//	printf("%d\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis", "Maxime", "COUCOUUUUUU"));
//	ft_putintendl(ft_strcspn("$*&$^&*", CONVS), 10, BASEUP);
	char *coucou = "coucou";
	printf("%d\n", ft_printf("Coucou %S oh yeeee , oh tiens, %s marche du premier coup x) et voici un pointeur : %p\n", L"💩💩", "l'unicode", coucou));
//	printf("%d\n", ft_printf("%S\n", L"💩💩"));
	return (0);
}
