/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/16 19:30:28 by mfranc           ###   ########.fr       */
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
	int a = 56789;
	int *b = &a;
//	printf("\nretour [%d]\n", printf(""));
//	printf("\nretour [%d]\n", printf("okcestcool"));
//	printf("\nretour [%d]\n", printf("Bonjour %s yeee on est bien", "maxime"));
//	printf("\nretour [%d]\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis, ils sont a %s 43", "Maxime", "Aymeric", "lecole"));
//	printf("\nretour [%d]\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis, ils sont a %s 42 et CEST %s", "Maxime", "Aymeric", "lecole", "cool"));
//	printf("\nretour : [%d]\n", printf("Yo, %s et son ami %s sont de tres bons amis", "Maxime", "COUCOUUUUUU"));
//	char *coucou = "coucou";
	
//	printf("\nretour : [%d]\n", ft_printf("Coucou oh %S yeeee , oh tiens, %s marche du premier coup x) et voici un pointeur %p et maintenant et un joli long chiffre %D", L"ѦѦѦ", "l'unicode", &coucou, 436578546789067));
//	printf("\nretour : [%d]\n", ft_printf("Coucou oh %S yeeee , oh tiens, %s marche du premier coup x) et voici un pointeur et maintenant %i un chiffre : %s et un joli long chiffre %D", L"ѦѦѦ", "l'unicode", 12345, coucou, 436578546789067));
//	printf("\nretour : [%d]\n", printf("%S", L"ѦѦ"));
//	printf("\nretour : [%d]\n", printf("Voici un %% grd nmbre %s unsigned  :|%lX| ye et un char|%c| et un pti | %C  | unicode   grhgr3ewagv", "en", 867654980766783, '^', L'ৈ'));
//	printf("\nretour : [%d]\n", printf("bgouy 100%%  "));
	ENDL
//	printf("\nretour : [%d]\n", ft_printf("coucou %b"DEFAULT, &a));
	printf("\nretour : [%d]\n", ft_printf("binfjour %s compte la chaine %noh c'est pas mal %d  !", "oonn", b, 5643));
	ft_putintendl(*b, 10, BASEUP);
//	printf("\nretour : [%d]\n", ft_printf("Attention test de l'etoit : %#-+*s", 20, "WAAAAh"));
//	printf("\nretour : [%d]\n", printf("Attention, %s test de l'%s ok cdest%s BIEN", "Bonjour", "etoile", "TrOp"));
	return (0);
}
