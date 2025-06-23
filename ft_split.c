/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 23:27:10 by emustafi          #+#    #+#             */
/*   Updated: 2025/06/16 22:28:23 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(char **arr, int n)
{
	while (n > 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static int	ft_count_str(const char *s, char c)
{
	int	count;
	int	in;

	count = 0;
	in = 0;
	while (*s)
	{
		if (*s != c && !in)
		{
			in = 1;
			count++;
		}
		else if (*s == c)
			in = 0;
		s++;
	}
	return (count);
}

static char	*ft_create_str(const char *s, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] && i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	get_word(const char **s, char c, char **out)
{
	int			len;
	const char	*start;

	start = *s;
	while (*start && *start == c)
		start++;
	if (!*start)
		return (0);
	len = 0;
	while (start[len] && start[len] != c)
		len++;
	*out = ft_create_str(start, len);
	if (!*out)
		return (-1);
	*s = start + len;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		j;
	int		res;

	if (!s)
		return (NULL);
	j = 0;
	arr = malloc(sizeof(*arr) * (ft_count_str(s, c) + 1));
	if (!arr)
		return (NULL);
	res = get_word(&s, c, &arr[j]);
	while (res == 1)
	{
		j++;
		res = get_word(&s, c, &arr[j]);
	}
	if (res == -1)
	{
		ft_free_all(arr, j);
		return (NULL);
	}
	arr[j] = NULL;
	return (arr);
}
