/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:43:12 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/26 16:29:34 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	word_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	letter_count(char **strs, int size)
{
	int	letters;
	int	i;

	letters = 0;
	i = -1;
	while (++i < size && strs[i] != NULL)
		letters += word_size(strs[i]);
	return (letters);
}

char	*ft_str_cat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = word_size(dest);
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i ++;
	}
	dest[size + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_words;
	int		i;
	char	*str;

	i = -1;
	size_words = letter_count(strs, size);
	str = (char *)malloc(size_words + (word_size(sep) * size - 1) + 1);
	while (++i < size)
	{
		ft_str_cat(str, strs[i]);
		if (i < size -1)
			ft_str_cat(str, sep);
	}
	str[size_words + (word_size(sep) * size - 1)] = 0;
	return (str);
}
