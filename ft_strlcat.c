/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:59:57 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/09 16:03:27 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	j;
	size_t	buffer;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	i = dst_len;
	j = 0;
	if (dst_len < size)
		buffer = size - dst_len;
	else
		buffer = 0;
	while (j + 1 < buffer && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (buffer > 0 && dst_len < size)
		dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
