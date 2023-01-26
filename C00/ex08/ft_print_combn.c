/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:29:58 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/12 19:59:50 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combn(int *comb, int i, int n)
{
	while (i < n)
	{
		comb[i] = comb[i - 1] + 1;
		i ++;
	}
	comb[n] = '0';
}

void	write_comb(int *comb)
{
	int		i;
	char	c;

	i = 0;
	while (comb[i] != '0')
	{
		c = comb[i] + '0';
		write (1, &c, 1);
		i++;
	}
}

void	increment(int *comb, int n)
{
	int	i;
	int	index;

	i = 1;
	index = n - 2;
	while (index >= 0)
	{
		if (comb[index] < 10 - i -1)
		{
			comb[index]++;
			combn(comb, index + 1, n);
			break ;
		}
	i ++;
	index --;
	}
	return ;
}

void	loop_inc(int *comb, int n)
{
	while (comb[n - 1] < 10)
	{
		write_comb(comb);
		if (comb[0] < 10 - n)
			write(1, ", ", 2);
		if (comb[n - 1] == 9)
			break ;
		comb[n - 1]++;
	}
	increment (comb, n);
}

void	ft_print_combn(int n)
{
	int	comb[9];

	comb[0] = 0;
	combn(comb, 1, n);
	while (comb[0] <= 10 - n)
	{
		loop_inc(comb, n);
		if (comb[0] == (10 - n))
		{
			if (n != 1)
				write_comb(comb);
			break ;
		}
	}
}
