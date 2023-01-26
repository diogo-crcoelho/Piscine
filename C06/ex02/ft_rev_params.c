/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:07:51 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/19 16:10:13 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc > 1)
	{
		while (--i > 0)
		{
			ft_print_str(argv[i]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
