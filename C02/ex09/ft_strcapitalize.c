/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:26:32 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/15 19:45:58 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sep(char c)
{
	if (c > 47 && c < 58)
		return (0);
	if (c > 64 && c < 91)
		return (0);
	if (c > 96 && c < 123)
		return (0);
	return (1);
}

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowercase(str);
	if (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
	i ++;
	while (str[i] != '\0')
	{
		if (check_sep(str[i - 1]) == 1)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
			}
		}
		i ++;
	}
	return (str);
}
