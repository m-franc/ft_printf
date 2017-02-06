/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:01:51 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/06 20:42:06 by mfranc           ###   ########.fr       */
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
	ft_putintendl(ft_printf("bonj%"), 10, BASEUP);
	return (0);
}
