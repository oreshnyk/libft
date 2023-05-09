/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:04:27 by oreshetn          #+#    #+#             */
/*   Updated: 2023/04/20 16:04:50 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
}
/*#define N 4

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "Hel~o world";
	s2 = "Hell world";

	printf("N->%d\n%s\n%s\nstrncmp->%d\nft_strncmp-> %d\n\n\n", 
	N, s1, s2, ft_strncmp(s1,s2,N), strncmp(s1, s2,N));

	s1 = "hello world";
	s2 = "hel world";

	printf("N->%d\n%s\n%s\nstrncmp->%d\nft_strncmp-> %d\n\n\n", 
	N, s1, s2, ft_strncmp(s1,s2,N), strncmp(s1, s2,N));
	
	s1 = "hel world";
	s2 = "hello world";

	printf("N->%d\n%s\n%s\nstrncmp->%d\nft_strncmp-> %d\n\n\n", 
	N, s1, s2, ft_strncmp(s1,s2,N), strncmp(s1, s2,N));

	s1 = "";
	s2 = "";

	printf("N->%d\n%s\n%s\nstrncmp->%d\nft_strncmp-> %d\n\n\n", 
	N, s1, s2, ft_strncmp(s1,s2,N), strncmp(s1, s2,N));

	return (0);
}*/
