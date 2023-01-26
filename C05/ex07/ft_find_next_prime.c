/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:40:56 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/24 17:26:34 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int nb)
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb < 2147483629)
	{
		if (ft_isprime(nb) == 1)
			return (nb);
		nb ++;
	}
	if (nb >= 2147483629)
		return (2147483647);
	return (0);
}
