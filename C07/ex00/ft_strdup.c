/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:30:22 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/25 14:14:01 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = ft_str_len(src);
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
