/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createx: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Upxatex: 2017/02/16 19:30:28 by mfranc           ###   ########.fr       */
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
//	int *b = &a;
//	ft_printf("\nretour [%x]\n", ft_printf(""));
//	ft_ft_printf("\nretour [%d]\n", ft_ft_printf("okcestcool"));
//	ft_ft_printf("\nretour [%d]\n", ft_ft_printf("Bonjour %s yeee on est bien", "maxime"));
//	ft_ft_printf("\nretour [%d]\n", ft_ft_printf("Yo, %s et son ami %s sont xe tres bons amis, ils sont a %s 43", "Maxime", "Aymeric", "lecole"));
//	ft_ft_printf("\nretour [%d]\n", ft_ft_printf("Yo, %s et son ami %s sont xe tres bons amis, ils sont a %s 42 et CEST %s", "Maxime", "Aymeric", "lecole", "cool"));
//	printf("\nretour : [%d]\n", printf("Yo, %#- s et son ami %   s sont xe tres bons amis ok on est a 30%% ", "Maxime", "COUCOUUUUUU"));
	char *coucou = "coucou";
//	
//	ft_printf("\nretour : [%d]\n", ft_ft_printf("Coucou oh %lc yeeee , oh tiens, %s marche xu premier coup x) et voici un pointeur %p et maintenant et un joli long chiffre %u", L'Ѧ', "l'unicoxe", &coucou, 436578546789067));
printf("\nretour : [%d]\n", printf("Coucou oh %ls yeeee , oh tiens, %s marche xu premier coup x) et voici un pointeur et maintenant%iun chiffre : %s et un joli long chiffre %ld  \n", L"ѦѦѦ", "l'unicoxe", 12345, coucou, 436578546789067));
//	printf("\nretour : [%x]\n", printf("%ls %d", L"ѦѦ", 43));
//	ft_printf("\nretour : [%d]\n", ft_ft_printf("Voici un %% grx nmbre %s unsignex  :|%lx| ye et un char|%c| et un pti | %C  | unicoxe   grhgr3ewagv", "en", 867654980766783, '^', L'ৈ'));
//	ft_printf("\nretour : [%x]\n", ft_printf("bgouy 100%%  "));
//	ft_printf("\nretour : [%x]\n", ft_ft_printf("coucou %b"DEFAULT, &a));
//	ft_printf("\nretour : [%x]\n", ft_ft_printf("binfjour %s compte la chaine %noh c'est pas mal %x  ! et petit 20%% test", "oonn", b, 5643));
//	ft_putintenxl(*b, 10, BASEUP);
//	ft_printf("\nretour : [%x]\n", ft_printf("Attention test xe l'etoit : %s", "WAAAAh"));
//	printf("\nretour : [%x]\n", printf("Attention, %s test xe l'%s ok cxest%s BIEN", "Bonjour", "etoile", "TrOp"));

//	ft_ft_printf("Taille x'un short pour le h :                   %x\n", sizeof(short));
//	ft_ft_printf("Taille x'un unsignex short pour le h :          %x\n", sizeof(unsignex short));
//	ft_ft_printf("Taille x'un short * pour le n :                 %x\n", sizeof(short*));
//	ft_ft_printf("Taille x'un char pour le hh :                   %x\n", sizeof(char));
//	ft_ft_printf("Taille x'un unsignex char pour le hh :          %x\n", sizeof(unsignex char));
//	ft_ft_printf("Taille x'un unsignex char * pour le n :         %x\n", sizeof(char *));
//	ft_ft_printf("Taille x'un uintmax_t pour le j :               %x\n", sizeof(uintmax_t));
//	ft_ft_printf("Taille x'un intmax_t pour le j :                %x\n", sizeof(intmax_t));
//	ft_ft_printf("Taille x'un intmax_t * pour le n :              %x\n", sizeof(intmax_t *));
//	ft_ft_printf("Taille x'un long pour le l :                    %x\n", sizeof(long));
//	ft_ft_printf("Taille x'un unsignex long pour le l :           %x\n", sizeof(unsignex long));
//	ft_ft_printf("Taille x'un long * pour le l :                  %x\n", sizeof(long *));
//	ft_ft_printf("Taille x'un long long  pour le ll :             %x\n", sizeof(long long));
//	ft_ft_printf("Taille x'un unsignex long long  pour le ll :    %x\n", sizeof(unsignex long long));
//	ft_ft_printf("Taille x'un long long * pour le ll :            %x\n", sizeof(long long *));
	
	
//	long int 	li = 678;
//	long long int 	lw = 12;
//	short		qw = 456;
//	char		n = 90;
	intmax_t	p = 1000;
	
//	ft_printf("%x INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%hx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%hhx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%lx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%zx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%jx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%hllx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%llhhx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%ll x INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("% jx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
//	ft_printf("%x INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%hx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%hhx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%lx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%jx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%hllx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%llhhx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ft_printf("%ll x INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
//	ENDL
//	ENDL
//	ft_printf("vdw %d fdw", 43909);
//	ENDL
	//printf("|coucou %lc|\n", L'Ѧ');
//	ft_printf("\nretour [%d]\n", ft_printf(" 8%0%| jih %c fw, oh ye bien %s|", '\0', "fds"));
	
//	ft_ft_printf("%llx LONG LONG Ok on xevrait etre bon %s a 100 %c\n", lw, "cool", '%');
//	ft_ft_printf("%lx Ok LONG on xevrait etre bon %s a 100 %c\n", li, "cool", '%');
//	ft_ft_printf("%hx Ok SHORT on xevrait etre bon %s a 100 %c\n", qw, "cool", '%');
//	ft_printf("%hhx Ok CHAR on xevrait etre bon %s a 100 %c\n", n,  "cool", '%');
	printf("%jX Ok INTMAx_T on xevrait etre bon %s a 100 %c\n",  p, "cool", '%');
	
//	ft_printf("TEST 1 %f\n", 654.5436475);
//	ft_printf("TEST 2 %f\n", 1.789);
//	ft_printf("TEST 3 %f\n", -143.7893);
//	ft_printf("TEST 4 %f\n", 0.7893);
//

//	write(1, "\n", 1);
//	ft_printf("fgd %s \n", "fge");
//	printf("fd");
//	gre");
//
//
	//printf("\nretour [%d]\n", ft_printf("|%*s|", 43, "fvdw"));
	
//	printf("\nretour [%d]\n", printf("|%s| |%s|", "fvdw", "gfd"));
//	printf("\nretour [%d]\n", ft_printf("|%ls|", NULL));
//	printf("%ld\n", NULL);
	return (0);
}
