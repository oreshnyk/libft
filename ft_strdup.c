/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:21 by oreshetn          #+#    #+#             */
/*   Updated: 2023/05/09 17:32:26 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	size_t	len;

	len = ft_strlen(s1) + 1;
	d = (char *)malloc(len);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s1, len);
	return (d);
}
