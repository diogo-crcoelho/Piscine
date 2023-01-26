/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:02:13 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/18 17:14:08 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlenn(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	res;

	i = 0;
	size_dest = ft_strlenn(dest);
	res = ft_strlenn(src);
	if (size <= size_dest)
		return (res += size);
	else
		res += size_dest;
	while (src[i] && size_dest + 1 < size)
	{
		dest[size_dest] = src[i];
		size_dest ++;
		i ++;
	}
	dest[size_dest] = '\0';
	return (res);
}
