/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:02:38 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/14 12:02:35 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if ((c >= 8 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	i;
	int	digit;
	int	is_negative;

	i = 0;
	num = 0;
	is_negative = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		i++;
		is_negative = 1;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		digit = nptr[i] - '0';
		num = num * 10 + digit;
		i++;
	}
	if (is_negative)
		num = -num;
	return (num);
}
