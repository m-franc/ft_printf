/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:58:01 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/17 21:02:54 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include <stdio.h>

int	main(void)
{
	char *pointer = "little";
	int number    =  5;
	printf("Here is a number-%4d-and a-%10s-word.\n", number, pointer);
	unsigned long long o = 0;
	printf("%llu\n", 0);
	printf("PRINTF INT MAX: %d\n", INTMAX);
	printf("PRINTF INT MIN : %d\n", INTMIN);
	printf("PRINTF UL MAX: %lu\n", ULMAX);
	printf("PRINTF LL MAX : %lld\n", LLMAX);
	printf("PRINTF LLU MAX : %llu\n", LLUIMAX);
	printf("%#o\n", 34);
	printf("%u", 543);
	printf("---%*d----\n", 6, number);
	printf("%#o\n", 34);
	printf("%u", 543);
}
