/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/09 11:43:20 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <locale.h>
#include <wchar.h>

int	main(void)
{
//	printf("%d\n", printf(""));
//	printf("%d\n", printf("okcestcool"));
//	printf("%d\n", printf("bgfko%"));
//	printf("%d\n", printf("Bonjour %s yeee on est bien", "maxime"));
//	printf("%d\n", printf("Yo, %789)*&^@# et son ami %)(*)(&&*())) sont de tres bons amis, ils sont a %ZZZZZ$@ 42", "Maxime", "COUCOUUUUUU", "lecole"));
	printf("%d\n", printf("Yo, %@!#$&*() et son ami %&*()) sont de tres bons amis, ils sont a %$&*^()) 42", "Maxime", "Aymeric", "lecole"));
//	printf("%d\n", printf("Yo, %s et son ami %s sont de tres bons amis", "Maxime", "COUCOUUUUUU"));
	return (0);
}
