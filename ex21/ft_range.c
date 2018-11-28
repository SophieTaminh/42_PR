/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_pg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:59:25 by staminh           #+#    #+#             */
/*   Updated: 2018/11/26 11:06:56 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*memoire;
	int		i;

	if (min >= max)
		return (0);
	if (!(memoire = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		memoire[i] = min + i;
		i++;
	}
	memoire[i] = '\0';
	return (memoire);
}
