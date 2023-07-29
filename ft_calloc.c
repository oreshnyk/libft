/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:21:24 by oreshetn          #+#    #+#             */
/*   Updated: 2023/07/29 19:39:43 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	total_size;

	if (count == 0 || size == 0)
	{
		total_size = 1;
	}
	else
	{
		total_size = count * size;
	}
	str = (char *)malloc(total_size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, total_size);
	return ((void *)str);
}
