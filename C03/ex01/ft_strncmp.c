/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:11:49 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/17 14:44:40 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c;
	unsigned char	d;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		c = s1[i];
		d = s2[i];
		if (c != d)
			return (c - d);
		i ++;
	}
	return (0);
}
