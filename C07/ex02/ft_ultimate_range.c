/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:48:24 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/25 14:13:37 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buff = (int *)malloc(sizeof(int) * (max - min));
	if (!buff)
	{
		*range = NULL;
		return (-1);
	}
	i = -1;
	while (++i < max - min)
		buff[i] = min + i;
	*range = buff;
	return (max - min);
}
