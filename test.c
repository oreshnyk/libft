/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:32:39 by oreshetn          #+#    #+#             */
/*   Updated: 2023/05/04 19:44:23 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main()
{
	//// test ft_strrchr
	// char s[] = "some,string,with,commas";

	// char *comma = strrchr(s, ',');
	// char *my = ft_strrchr(s, ',');

	// printf("lib func: %s\n", comma);
	// printf("my  func: %s\n", my);
	// printf("mem address of lib func: %p\n", comma);
	// printf("mem address of my  func: %p\n", my);
	// printf("-----------------------\n");

	// char *fail = strrchr(s, '@');
	// if (fail == NULL)
	// 	printf("Could not find @!\n");

	// char *my_f = ft_strrchr(s, '@');
	// if (my_f == NULL)
	// 	printf("My func didn't find @!\n");
	
	// printf("mem address of lib func: %p\n", fail);
	// printf("mem address of my  func: %p\n", my_f);

	// printf("-----------------------\n");
	// printf("test from francinette:\n");
	// char *test5 = ft_strrchr("teste", 'e');
	// char *test6 = ft_strrchr("teste", '\0');
	// printf("test5: %p\n", test5);
	// printf("test6: %p\n", test6);
	//// test ft_strrchr

	// =========================================================

	// // test ft_memset
	// char buffer[10];
	// char my_buffer[10];

	// memset(buffer, 'a', sizeof(char)*5);
	// memset(buffer + 5, 'b', sizeof(char)*5);
	// ft_memset(my_buffer, 'a', sizeof(char)*5);
	// ft_memset(my_buffer + 5, 'b', sizeof(char)*5);

	// printf("%p\n", my_buffer);

	// for (int i = 0; i < 10; i++)
	// 	printf("%c", my_buffer[i]);
	// printf("\n");

	// for (int j = 0; j < 10; j++)
	// 	printf("%c", buffer[j]);
	// printf("\n");
	// // test ft_memset

	// =========================================================

	//test ft_memcpy

	// memcpy(((void *)0), ((void *)0), 3);
	// printf("check", memcpy(((void *)0), ((void *)0), 3));

	//test ft_memcpy

	return (0);
}
