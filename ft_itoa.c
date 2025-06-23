/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:31:47 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/16 22:35:41 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse_str(char *buf, int len)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		tmp = buf[start];
		buf[start] = buf[end];
		buf[end] = tmp;
		start++;
		end--;
	}
}

static int	ft_fill_buffer(int n, char *buf)
{
	long	num;
	int		i;
	int		neg;

	num = n;
	i = 0;
	neg = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	if (num == 0)
		buf[i++] = '0';
	while (num > 0)
	{
		buf[i++] = '0' + (num % 10);
		num /= 10;
	}
	if (neg)
		buf[i++] = '-';
	buf[i] = '\0';
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		k;
	char	buf[12];

	len = ft_fill_buffer(n, buf);
	ft_reverse_str(buf, len);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	k = 0;
	while (k <= len)
	{
		str[k] = buf[k];
		k++;
	}
	return (str);
}
