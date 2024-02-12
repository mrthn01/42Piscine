/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:15:58 by melcuman          #+#    #+#             */
/*   Updated: 2023/09/11 14:20:04 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	division;
	int	remainder;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, &"-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		division = nb / 10;
		remainder = nb % 10;
		ft_putnbr(division);
		ft_putnbr(remainder);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
}
