/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:39:11 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/24 17:26:21 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	temp;

	if (nb <= 2)
	{
		if (nb == 2)
			return (1);
		return (0);
	}
	temp = 2;
	while (temp * temp <= nb)
	{
		if (nb % temp == 0)
			return (0);
		temp ++;
	}
	return (1);
}
