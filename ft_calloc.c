/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:21:24 by oreshetn          #+#    #+#             */
/*   Updated: 2023/05/09 17:22:31 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count <= 0 || size <= 0)
		str = (char *)malloc(1);
	else
		str = (char *)malloc(count * size);
	if (!str)
		return (NULL);
	return (ft_memset(str, 0, count * size));
}
