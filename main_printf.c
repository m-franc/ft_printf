/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:26:11 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/07 15:14:48 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <locale.h>
#include <stdio.h>

int	main(void)
{
	setlocale(LC_ALL, "");
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
	printf("test de padding de 10 avec 0 devant et un + |%0+10d|\n", 42);
	printf("test de padding de 10 avec 0 ' ' devant et un + |% +10d|\n", 42);
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
	printf("\n");
	printf("test de la virgule avec string %12s\n", "bonjour");
	printf("test de la virgule avec string %12d\n", 9087);
	printf("test de la virgule avec string %12a\n", 9087.534);
	printf("\n");
	printf("test de la precision avec un point sur une chaine de carctere %.10s\n", "Bonj je mapelle maxime");
	printf("test de la precision avec un point sur un int %.2ld\n", 897);
	printf("test de la precision avec un point sur un int %.1f\n", 5643.654);
	printf("\n");
	printf("test de la precision avec un * et un int : |%.*d|\n", 10, 5643);
	printf("test de la precision avec un * et une string : |%.*s|\n", 12, "erdjytyterwdgfdshfwrt");
	printf("test de la precision avec un * et un float : |%.*f|\n", 4, 4356.756452);
	printf("test de la precision et du padding avec un * et une string : |%*.*s|\n", 40, 12, "erdjytyterwdgfdshfwrt");
	printf("test de la precision et du padding avec un * et un int : |%*.*d|\n", 40, 12, 90876);
	printf("test de la precision et du padding avec un * et un float : |%*.*f|\n", 40, 2, 5463.6543224);
	printf("\n");
	printf("test du flag $ avec deux int |%2$d %1$d|\n", 53224, 10);
	printf("test du flag $ avec deux unsigned int |%2$u %1$u|\n", 53224, 10);
	printf("test du flag $ avec deux float en 0x |%2$f %1$f|\n", 53224.543, 10.54655);
//	printf("test du flag $ avec deux string : |%2$s %1$s | %d|\n", "deuxieme", "premiere", 564);
	printf("\n");
	printf("test du flag L avec juste f |%Lf|\n", 9.989808765436789);
	printf("test avec juste f |%f|\n", 44234.1432543);
	printf("\n");
	printf("Tests des floats avec f : |%f|\n", 4367.45436);
	printf("Tests des floats avec f et precision de 4: |%.4f|\n", 4367.45436);
	printf("Tests des floats avec e : |%e|\n", 43423567.4);
	printf("Tests des floats avec e et precision de 2: |%.2e|\n", 43423567.4);
	printf("Tests des floats avec g : |%f|\n", 4367.456);
	printf("Tests des floats avec g et precision : |%.2f|\n", 4367.436);
	printf("Tests des floats avec a : |%a|\n", 0.000000);
	printf("Tests des floats avec a et precision : |%.2a|\n", 4367.436);
	printf("\n");
	printf("|%.d|\n", 0);
	printf("%d\n", printf("|%c|\n", '\0'));
	printf("%d\n", open("diff.sh", O_RDONLY));	
	printf("[% s]\n", "");
	printf("%d\n", "dfsgh");
	printf("%.7#54-x\n", 54);
	ft_putintendl(printf("%C", L'ॷ'), 10, BASEUP);
	ENDL
	ft_putintendl(printf("bonjkour%"), 10, BASEUP);
}
