/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:25:24 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/19 16:01:38 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		write (1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc)
	{
		ft_putstr (argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
