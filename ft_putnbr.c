/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <emustafi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:03:56 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/23 17:06:42 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[12];
	int		i;
	long	num;

	num = n;
	i = 0;
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	while (num > 0)
	{
		buf[i++] = '0' + (num % 10);
		num /= 10;
	}
	while (i > 0)
		write(fd, &buf[--i], 1);
}
