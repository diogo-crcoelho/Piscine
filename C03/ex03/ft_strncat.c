/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:28:06 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/17 14:32:54 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlennn(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	i = 0;
	size = ft_strlennn(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[size + i] = src[i];
		i ++;
	}
	dest[size + i] = '\0';
	return (dest);
}
