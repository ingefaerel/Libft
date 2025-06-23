/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:04 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/14 12:01:10 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	sdup = (char *)malloc(len + 1);
	if (!sdup)
		return (NULL);
	while (s[i])
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
