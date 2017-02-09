/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/09 11:47:50 by mfranc           ###   ########.fr       */
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
	printf("%d\n", ft_printf(""));
	printf("%d\n", ft_printf("okcestcool"));
	printf("%d\n", ft_printf("bgfko%"));
	printf("%d\n", ft_printf("Bonjour %s yeee on est bien", "maxime"));
	printf("%d\n", ft_printf("Yo, %@!#$&*() et son ami %&*()) sont de tres bons amis, ils sont a %$&*^()) 42", "Maxime", "Aymeric", "lecole"));
	printf("%d\n", ft_printf("Yo, %@!#$&*()s et son ami %s sont de tres bons amis, ils sont a %$&*^())s 42", "Maxime", "Aymeric", "lecole"));
	printf("%d\n", ft_printf("Yo, %s et son ami %s sont de tres bons amis", "Maxime", "COUCOUUUUUU"));
	return (0);
}
