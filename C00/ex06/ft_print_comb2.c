/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:25:03 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/12 18:20:16 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pair(int value)
{
	int		dec;
	int		uni;
	char	d;
	char	u;

	dec = value / 10;
	uni = value % 10;
	d = dec + '0';
	u = uni + '0';
	write (1, &d, 1);
	write (1, &u, 1);
}

void	compare(int f, int s)
{
	while (f < 99)
	{
		s = f + 1;
		while (s < 100)
		{
			write_pair(f);
			write(1, " ", 1);
			write_pair(s);
			if (f < 98)
			{
				write(1, ", ", 2);
			}
			s++;
		}
		f++;
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	compare(f, s);
}
