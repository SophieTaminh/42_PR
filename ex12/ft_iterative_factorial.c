/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:31:24 by staminh           #+#    #+#             */
/*   Updated: 2018/11/23 13:33:36 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int facto;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	facto = nb;
	while (nb > 2)
	{
		nb = nb - 1;
		facto = facto * nb;
	}
	return (facto);
}
