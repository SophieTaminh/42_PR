/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:34:19 by staminh           #+#    #+#             */
/*   Updated: 2018/11/23 13:34:23 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int facto;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	facto = nb;
	if (nb > 2)
	{
		facto = nb * ft_recursive_factorial(nb - 1);
	}
	return (facto);
}
