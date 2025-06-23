/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:54:51 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/16 23:08:11 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	if (i > 0)
		write(fd, s, i);
	write (fd, "\n", 1);
}
