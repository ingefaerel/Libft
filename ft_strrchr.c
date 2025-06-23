/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:59:20 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/09 17:27:34 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*s)
		s++;
	if ((char)c == '\0')
		return ((char *)s);
	while (s >= ptr)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
