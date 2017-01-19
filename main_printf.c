/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:26:11 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/19 20:31:18 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
//	char *pointer = "little";
//	int number    =  5;
//	printf("Here is a number-%4d-and a-%10s-word.\n", number, pointer);
//	unsigned long long o = 0;
//	printf("%llu\n", 0);
//	printf("PRINTF INT MAX: %d\n", INTMAX);
//	printf("PRINTF INT MIN : %d\n", INTMIN);
//	printf("PRINTF UL MAX: %lu\n", ULMAX);
//	printf("PRINTF LL MAX : %lld\n", LLMAX);
//	printf("PRINTF LLU MAX : %llu\n", LLUIMAX);
//	printf("%#o\n", 34);
//	printf("%u", 543);
//	printf("---%*d----\n", 6, number);
//	printf("%#o\n", 34);
//	printf("%u", 543);
	printf("BONJOUR\n\n");
	printf("Test du flag # avec l'option g avec float |%#g|\n\n", 677.65);
	printf("TEST PRECISION : \n");
	printf("Test de padding a gacuhe |%50s|\n", "bonjour c'est maxime'");
	printf("Test de padding a gauche avec un int |%50x|\n", 7753);
	printf("\n");
	printf("Test de padding inferieure a loption s |%10s|\n", "bonjour c'est maxime'");
	printf("Test de padding inferieure a loption lx |%10lx|\n", 775539087676);
	printf("\n");
	printf("Test de padding a droite avec le flag - avant le padding |%-10s|\n", "s maxime'");
	printf("Test de padding a droite avec le flag - avant le padding |%-10x|\n", 7753);
	printf("\n");
	printf("Test de padding a droite avec le falg - apres le padding |%50-s|\n", "bonjour c'est maxime'");
	printf("Test de padding a droite avec le flag - apres le padding |%50-x|\n", 7753);	
	printf("\n");
	printf("Test de 0 padding avec la flag - derriere le padding |%0-s |\n ", "bonjour c'est maxime'");
	printf("Test de 0 padding avec le fflag - derriere  le padding |%0-x|\n", 7753);
	printf("Test de 0 padding |%0s|\n", "bonjour c'est maxime'");
	printf("Test de 0 padding |%0x|\n", 7753);
	printf("Test du - tout seul |%-0s|\n", "bonjour c'est maxime'");
	printf("Test du - tout seul |%-0x|\n", 7753);
	printf("\n");
	printf("Test dun padding a gauche puis tester la precision avec un char * |%30.10s|\n", "bonjour c'est maxime'");
	printf("Test dun padding a gauche puis tester la precision avec un int |%30.7d|\n", 7753);
	printf("Test de padding - avec un plus pour voir ce que ca fait |%-45s|\n", "bonjour sa va");
	printf("Test de padding - avec un plus pour voir ce que ca fait |%-+45lld|\n", 843256743567890);
	printf("\n");
	printf("Test du blank avnt un int |% d\n|", 43);
	printf("Test du blank avnt un long int |% d\n|", 43);
	printf("Test du blank avnt un long long int |% d\n|", 43);
	printf("Test du blank avnt un int negative |% d\n|", -43);
	printf("Test du blank avnt un unsigned int |% u\n|", 4243563);
	printf("Test du blank avnt un string |% s\n|", "bkn");
	printf("\n");
	printf("test du flag + avec un signed int |%   #  o\n", 645);
	printf("test du flag + avec un signed neg int |%   #   x\n", -645);
	printf("test du flag + avec un signed long long int |%.10 lld\n", 628967);
	printf("test du flag + avec un signed long long int |%4lld\n", 4254);
	printf("test du flag + avec un signed unsigned int |%     u\n", 6234567896543245);
}
