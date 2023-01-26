/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:28:45 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/18 20:59:08 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_repeat(char *base, int i)
{
	int	j;

	while (--i > 0)
	{
		j = i;
		while (--j >= 0)
		{
			if (base[j] == base[i])
				return (1);
		}
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	if (!(check_repeat(base, i)))
		return (i);
	return (0);
}

int	div_size(long int nb, int size)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= size;
		i ++;
	}
	return (i);
}

int	dec_to_base(long int nb, char*base, int min, char *res)
{
	int	i;
	int	base_len;

	base_len = check_base(base);
	if (base_len < 2)
		return (0);
	i = div_size(nb, base_len) + min;
	res[i] = 0;
	if (nb == 0)
	{
		res[0] = base[0];
		res[1] = 0;
	}
	else
	{
		while (i > min)
		{
			res[i - 1] = base[nb % base_len];
			nb /= base_len;
			i --;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int		nbr_long;
	int				min;
	int				i;
	char			res[32];

	nbr_long = (long int)nbr;
	min = 0;
	i = -1;
	if (nbr < 0)
	{
		res[min] = '-';
		min ++;
		nbr_long *= -1;
	}	
	if (dec_to_base(nbr_long, base, min, res))
	{
		while (res[++i])
			write (1, &res[i], 1);
	}
}
