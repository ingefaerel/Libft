/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:59:51 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/10 12:06:30 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
