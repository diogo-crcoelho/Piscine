/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:29:30 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/12 17:17:12 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < size)
	{
		temp = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = temp;
		count ++;
		size --;
	}
}
