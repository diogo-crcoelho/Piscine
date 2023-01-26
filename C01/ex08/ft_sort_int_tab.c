/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:09:26 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/12 17:10:55 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sorter(int *tab, int index_min, int index_max)
{
	int	i;
	int	min;
	int	max;

	min = 2147483647;
	max = -2147483648;
	i = index_min;
	while (i <= index_max)
	{
		if (tab[i] < min)
		{
			min = tab[i];
			tab[i] = tab[index_min];
			tab [index_min] = min;
		}
		else if (tab[i] > max)
		{
			max = tab[i];
			tab[i] = tab[index_max];
			tab [index_max] = max;
		}
		i ++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_min;
	int	index_max;
	int	temp;

	index_min = 0;
	index_max = size - 1;
	temp = 0;
	while (index_min < index_max)
	{
		sorter(tab, index_min, index_max);
		index_min ++;
		index_max --;
	}
}
