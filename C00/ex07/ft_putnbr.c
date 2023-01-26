/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:57:49 by dcarvalh          #+#    #+#             */
/*   Updated: 2023/01/25 20:43:21 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	inttostr(char *str, int nb)
{
	int	i;
	int	clone;

	clone = nb;
	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 10 + 48;
		i ++;
		nb /= 10;
	}
	str[i] = '\0';
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i ++;
	}
}

void	strrev(char *str, int nb)
{
	int		size;
	int		i;
	char	temp;

	size = inttostr(str, nb);
	i = 0;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size -1];
		str[size - 1] = temp;
		i++;
		size --;
	}
	ft_putstr(str);
}

void	ft_putnbr(int nb)
{
	char	str[11];

	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		strrev(str, 147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	strrev(str, nb);
}
