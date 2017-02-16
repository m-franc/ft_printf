/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/16 18:31:03 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "color.h"
#include <stdio.h>
#include <stdarg.h>
#include <locale.h>
#include <wchar.h>

int	main(void)
{

	setlocale(LC_ALL, "");
//	int a = 56789;
//	printf("\nretour [%d]\n", ft_printf(""));
//	printf("\nretour [%d]\n", ft_printf("okcestcool"));
//	printf("\nretour [%d]\n", ft_printf("Bonjour %s yeee on est bien", "maxime"));
//	printf("\nretour [%d]\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis, ils sont a %s 43", "Maxime", "Aymeric", "lecole"));
//	printf("\nretour [%d]\n", printf("Yo, %s et son ami %s sont de tres bons amis, ils sont a %s 42 et CEST %s", "Maxime", "Aymeric", "lecole", "cool"));
//	printf("\nretour : [%d]\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis", "Maxime", "COUCOUUUUUU"));
//	char *coucou = "coucou";
	
//	printf("\nretour : [%d]\n", ft_printf("Coucou oh %S yeeee , oh tiens, %s marche du premier coup x) et voici un pointeur et maintenant %i un chiffre : %o et un joli long chiffre %D", L"ѦѦѦ", "l'unicode", 12345, coucou, 436578546789067));
//	printf("\nretour : [%d]\n", ft_printf("Coucou oh %S yeeee , oh tiens, %s marche du premier coup x) et voici un pointeur et maintenant %i un chiffre : %o et un joli long chiffre %D", L"ѦѦѦ", "l'unicode", 12345, coucou, 436578546789067));
//	printf("\nretour : [%d]\n", ft_printf("%S", L"ѦѦ"));
//	printf("\nretour : [%d]\n", ft_printf("Voici un %% grd nmbre %s unsigned  :|%lX| ye et un char|%c| et un pti | %C  | unicode   grhgr3ewagv", "en", 867654980766783, '^', L'ৈ'));
//	printf("\nretour : [%d]\n", ft_printf("bgouy 100%%  "));
	ENDL
//	printf("\nretour : [%d]\n", ft_printf("coucou %b"DEFAULT, &a));
//	printf("\nretour : [%d]\n", ft_printf("binfjour %s compte la chaine %noh c'est pas mal %**d  !", "oonn", b, 32, 32, 678));
//	ft_putintendl(*b, 10, BASEUP);
//	printf("\nretour : [%d]\n", ft_printf("Attention test de l'etoit : %#-+*s", 20, "WAAAAh"));
	printf("\nretour : [%d]\n", ft_printf("Attention, %s test de l'%*s ok cdest%s BIEN", "Bonjour", 54, "etoile", "TrOp"));
	return (0);
}
