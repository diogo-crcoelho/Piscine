/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:22:00 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/20 16:30:01 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c;
	unsigned char	d;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		c = s1[i];
		d = s2[i];
		if (c != d)
			return (c - d);
		i ++;
	}
	return (0);
}

void	ft_printstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
}

void	sort_params(char **str, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < size -1)
	{
		j = 0;
		while (++j < size - i)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	sort_params(argv, argc);
	while (argv[++i])
	{
		ft_printstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
