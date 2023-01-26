/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:54:46 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/19 13:59:24 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_nbr(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int	ft_isspace(char c)
{
	if (c > 8 && c < 14)
		return (1);
	if (c == 32)
		return (1);
	return (0);
}

int	check_signal(char *str)
{
	int	i;
	int	signal;

	i = -1;
	signal = 1;
	while (str[++i] && !(check_nbr(str[i])))
	{
		if (str[i] == 45)
			signal *= -1;
		else if (str[i] != 43)
			return (0);
	}
	return (signal);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	res;

	i = 0;
	res = 0;
	while (str[i] && ft_isspace(str[i]))
	{
		i ++;
	}
	signal = check_signal(&str[i]);
	while (str[i] && !(check_nbr(str[i])))
	{
		i ++;
	}
	while (str[i] && check_nbr(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i ++;
	}	
	res *= signal;
	return (res);
}
