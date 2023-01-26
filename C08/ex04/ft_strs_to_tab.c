/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:51:37 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/26 22:48:31 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = ft_strlen(src);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (0);
	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}

t_stock_str	create_struct(char *str)
{
	t_stock_str	a;

	a.size = ft_strlen(str);
	a.str = str;
	a.copy = ft_strdup(str);
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buff;
	int			i;

	buff = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!buff)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		buff[i] = create_struct(av[i]);
	}
	buff[i].str = 0;
	return (buff);
}
