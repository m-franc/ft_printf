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
	//	printf("\nretour [%x]\n", printf(""));
	//	ft_printf("\nretour [%d]\n", ft_printf("okcestcool"));
	//	ft_printf("\nretour [%d]\n", ft_printf("Bonjour %s yeee on est bien", "maxime"));
	//	ft_printf("\nretour [%d]\n", ft_printf("Yo, %s et son ami %s sont xe tres bons amis, ils sont a %s 43", "Maxime", "Aymeric", "lecole"));
	//	ft_printf("\nretour [%d]\n", ft_printf("Yo, %s et son ami %s sont xe tres bons amis, ils sont a %s 42 et CEST %s", "Maxime", "Aymeric", "lecole", "cool"));
	//	printf("\nretour : [%d]\n", printf("Yo, %#- s et son ami %   s sont xe tres bons amis ok on est a 30%% ", "Maxime", "COUCOUUUUUU"));
	char *coucou = "coucou";
	//	
	//	printf("\nretour : [%d]\n", printf("Coucou oh %lc yeeee , oh tiens, %s marche xu premier coup x) et voici un pointeur %p et maintenant et un joli long chiffre %u", L'Ѧ', "l'unicoxe", &coucou, 436578546789067));
	//printf("\nretour : [%d]\n", printf("Coucou oh %ls yeeee , oh tiens, %s marche xu premier coup x) et voici un pointeur et maintenant%iun chiffre : %s et un joli long chiffre %ld  \n", L"ѦѦѦ", "l'unicoxe", 12345, coucou, 436578546789067));
	//	printf("\nretour : [%x]\n", printf("%ls %d", L"ѦѦ", 43));
	//	printf("\nretour : [%d]\n", ft_printf("Voici un %% grx nmbre %s unsignex  :|%lx| ye et un char|%c| et un pti | %C  | unicoxe   grhgr3ewagv", "en", 867654980766783, '^', L'ৈ'));
	//	printf("\nretour : [%x]\n", printf("bgouy 100%%  "));
	//	printf("\nretour : [%x]\n", ft_printf("coucou %b"DEFAULT, &a));
	//	printf("\nretour : [%x]\n", ft_printf("binfjour %s compte la chaine %noh c'est pas mal %x  ! et petit 20%% test", "oonn", b, 5643));
	//	ft_putintenxl(*b, 10, BASEUP);
	//	printf("\nretour : [%x]\n", printf("Attention test xe l'etoit : %s", "WAAAAh"));
	//	printf("\nretour : [%x]\n", printf("Attention, %s test xe l'%s ok cxest%s BIEN", "Bonjour", "etoile", "TrOp"));

	//	ft_printf("Taille x'un short pour le h :                   %x\n", sizeof(short));
	//	ft_printf("Taille x'un unsignex short pour le h :          %x\n", sizeof(unsignex short));
	//	ft_printf("Taille x'un short * pour le n :                 %x\n", sizeof(short*));
	//	ft_printf("Taille x'un char pour le hh :                   %x\n", sizeof(char));
	//	ft_printf("Taille x'un unsignex char pour le hh :          %x\n", sizeof(unsignex char));
	//	ft_printf("Taille x'un unsignex char * pour le n :         %x\n", sizeof(char *));
	//	ft_printf("Taille x'un uintmax_t pour le j :               %x\n", sizeof(uintmax_t));
	//	ft_printf("Taille x'un intmax_t pour le j :                %x\n", sizeof(intmax_t));
	//	ft_printf("Taille x'un intmax_t * pour le n :              %x\n", sizeof(intmax_t *));
	//	ft_printf("Taille x'un long pour le l :                    %x\n", sizeof(long));
	//	ft_printf("Taille x'un unsignex long pour le l :           %x\n", sizeof(unsignex long));
	//	ft_printf("Taille x'un long * pour le l :                  %x\n", sizeof(long *));
	//	ft_printf("Taille x'un long long  pour le ll :             %x\n", sizeof(long long));
	//	ft_printf("Taille x'un unsignex long long  pour le ll :    %x\n", sizeof(unsignex long long));
	//	ft_printf("Taille x'un long long * pour le ll :            %x\n", sizeof(long long *));


	//	long int 	li = 678;
	//	long long int 	lw = 12;
	//	short		qw = 456;
	//	char		n = 90;
	//	intmax_t	p = 1000;

	//	printf("%x INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%hx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%hhx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%lx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%zx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%jx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%hllx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%llhhx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%ll x INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("% jx INT Ok on xevrait etre bon %s a 100 %c\n", 667867961, "cool", '%');
	//	printf("%x INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%hx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%hhx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%lx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%jx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%hllx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%llhhx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%llx INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	printf("%ll x INT Ok on xevrait etre bon %s a 100 %c\n", -66786796199999, "cool", '%');
	//	ENDL
	//	ENDL
	//	printf("vdw %d fdw", 43909);
	//	ENDL
	//printf("|coucou %lc|\n", L'Ѧ');
	//	printf("\nretour [%d]\n", printf(" 8%0%| jih %c fw, oh ye bien %s|", '\0', "fds"));

	//	ft_printf("%llx LONG LONG Ok on xevrait etre bon %s a 100 %c\n", lw, "cool", '%');
	//	ft_printf("%lx Ok LONG on xevrait etre bon %s a 100 %c\n", li, "cool", '%');
	//	ft_printf("%hx Ok SHORT on xevrait etre bon %s a 100 %c\n", qw, "cool", '%');
	//	printf("%hhx Ok CHAR on xevrait etre bon %s a 100 %c\n", n,  "cool", '%');
	//	printf("%# *89     .43     0.**d Ok INTMAx_T on xevrait etre bon a 100 %%\n", 76, 90, 100, 65);

	//	printf("TEST 1 %f\n", 654.5436475);
	//	printf("TEST 2 %f\n", 1.789);
	//	printf("TEST 3 %f\n", -143.7893);
	//	printf("TEST 4 %f\n", 0.7893);
	//

	//	write(1, "\n", 1);
	//	printf("fgd %s \n", "fge");
	//	printf("fd");
	//	gre ");
	//
	//
	//	printf("\nretour [%d]\n", printf("|%*s|", 43, "fvdw"));

	//	printf("\nretour [%d]\n", printf("|%s| |%s|", "fvdw", "gfd"));
	//	printf("\nretour [%d]\n", printf("la precision : %*2$d et une deuxieme lourd %*2$d -yy  hehe", 10, 32));

	//  	printf("jhil %**d - %**d - \n", 1000, 4, 54, 76, 12, 43);


	int b = 4;
	int *a = &b;

	//	PSTR(ft_convbase("104bd3000", 16, 10, BASEUP));
	//	printf("blablabla blabla %s gre\n", "gef");
	//	printf("blablabla blabla %S gre\n", L"ѦѦѦ");
	//	printf("blablabla blabla %p gre\n", coucou);
	//	printf("blablabla blabla %d gre\n", 54);
	//	printf("blablabla blabla %D gre\n", 2345678945678);
	//	printf("blablabla blabla %i gre\n", 678);
	//	printf("blablabla blabla %o gre\n", 980765);
	//	printf("blablabla blabla %O gre\n", 5678900987542);
	//	printf("blablabla blabla %u gre\n", 654634);
	//	printf("blablabla blabla %U gre\n", -654756345323);
	//	printf("blablabla blabla %x gre\n", 54234);
	//	printf("blablabla blabla %X gre\n", 653424);
	//	printf("blablabla blabla %c gre\n", 'c');
	//	printf("blablabla blabla %C gre\n", 32003);
	//	ft_printf("blablabla blabla %n gre\n", a);

//	ft_printf("\n");
//	ft_printf("%%\n");
//	ft_printf("%d\n", 42);
//	ft_printf("%d%d\n", 42, 41);
//	ft_printf("%d%d%d\n", 42, 43, 44);
//	ft_printf("%ld\n", 2147483647);
//	ft_printf("%lld\n", 9223372036854775807);
//	ft_printf("%x\n", 505);
//	ft_printf("%X\n", 505);
//	ft_printf("%p\n", &ft_printf);
//	ft_printf("%20.15d\n", 54321);
//	ft_printf("%-10d\n", 3);
//	ft_printf("bh % d vf \n", 3);
//	ft_printf("%+d\n", 3);
//	ft_printf("%010d\n", 1);
//	ft_printf("%hhd\n", 0);
//	ft_printf("%jd\n", 9223372036854775807);
//	ft_printf("%zd\n", 4294967295);
//	ft_printf("%\n");
/*	ft_printf("%U\n", 4294967295);
	ft_printf("%u\n", 4294967295);
	ft_printf("%o\n", 40);
	ft_printf("%%#08x\n", 42);
	ft_printf("%x\n", 1000);
	ft_printf("%#X\n", 1000);
	ft_printf("%s\n", NULL);
	ft_printf("%S\n", L"ݗݜशব");
	ft_printf("%s%s\n", "test", "test");
	ft_printf("%s%s%s\n", "test", "test", "test");
	ft_printf("%C\n", 15000);*/
//	while (1);
	return (0);
}
