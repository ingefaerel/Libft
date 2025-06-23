/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <emustafi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:02:38 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/23 15:28:28 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_isnegative(const char c)
{
	if (c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	i;
	int	digit;
	int	is_neg;

	i = 0;
	num = 0;
	while (ft_isspace(nptr[i]))
		i++;
	is_neg = ft_isnegative(nptr[i]);
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		digit = nptr[i] - '0';
		num = num * 10 + digit;
		i++;
	}
	if (is_neg == 1)
		num = -num;
	return (num);
}
