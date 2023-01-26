/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:56:17 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/17 14:45:06 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
