/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:05:59 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/14 12:34:35 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	i = 0;
	if (start >= slen)
		sub = (char *)malloc(1);
	else
		sub = (char *)malloc((sizeof(char) * len) + 1);
	if (!sub)
		return (NULL);
	while (start < slen && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
