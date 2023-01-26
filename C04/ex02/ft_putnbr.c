/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:02:49 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/18 13:52:09 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	dim(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i ++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i ++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int			i;
	int			j;
	int			min;
	static char	str[11];

	i = dim(nb);
	j = i;
	min = 0;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
		min ++;
	}
	while (--i >= min)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
	}
	str[j] = 0;
	return (str);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
		print_str(ft_itoa(nb));
}
