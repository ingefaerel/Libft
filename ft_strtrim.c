/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:11:12 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/14 14:33:14 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		len;
	int		j;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	j = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (len > i && ft_isinset(s1[len - 1], set))
		len--;
	s2 = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[j] = s1[i];
		j++;
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
