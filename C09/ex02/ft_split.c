/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:56:08 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/29 12:18:59 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (c == charset[i])
			return (1);
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i ++;
		if (str[i] && !(ft_is_sep(str[i], charset)))
			count ++;
		while (str[i] && !(ft_is_sep(str[i], charset)))
			i ++;
	}
	return (count);
}

int	word_size(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_sep(str[i], charset))
		i++;
	return (i);
}

char	*make_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = -1;
	len_word = word_size(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (++i < len_word)
		word[i] = str[i];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words = count_words(str, charset);
	res = (char **)malloc((words + 1) * sizeof(char *));
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i ++;
		if (str[i] && !(ft_is_sep(str[i], charset)))
		{
			res[j] = make_word(&str[i], charset);
			j ++;
		}
		while (str[i] && !(ft_is_sep(str[i], charset)))
			i ++;
	}
	res[j] = 0;
	return (res);
}
