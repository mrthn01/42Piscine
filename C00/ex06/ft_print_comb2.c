/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:21:09 by melcuman          #+#    #+#             */
/*   Updated: 2023/09/13 13:18:09 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char a, char b)
{
	char	d1;
	char	d2;
	char	r1;
	char	r2;

	d1 = a / 10 + '0';
	d2 = b / 10 + '0';
	r1 = a % 10 + '0';
	r2 = b % 10 + '0';
	write(1, &d1, 1);
	write(1, &r1, 1);
	write(1, " ", 1);
	write(1, &d2, 1);
	write(1, &r2, 1);
	if (a != 98 || b != 99)
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b++;
		}
		a++;
	}
}
