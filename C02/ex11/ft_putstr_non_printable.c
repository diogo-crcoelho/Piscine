/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:17:58 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/14 20:47:31 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(unsigned char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	dectohex(unsigned char test)
{
	char	a;
	char	b;

	a = "0123456789abcdef"[test / 16];
	b = "0123456789abcdef"[test % 16];
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_char_is_printable(c))
		{
			write (1, &c, 1);
		}
		else
			dectohex(c);
		i ++;
	}
}
