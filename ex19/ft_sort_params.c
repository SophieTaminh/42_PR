/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:21:44 by staminh           #+#    #+#             */
/*   Updated: 2018/11/23 13:40:41 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **s1, char **s)
{
	char *svg;

	svg = *s1;
	*s1 = *s;
	*s = svg;
}

int		ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k])
		k++;
	return (s1[k] - s2[k]);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
	{
		i = 2;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i - 1]);
				i = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
