/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:02:18 by melcuman          #+#    #+#             */
/*   Updated: 2023/09/03 20:40:28 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int	y1;
	int	x1; 

	x1 = 1;
	while (x1 <= x && y > 0)
	{
		y1 = 1;
		while (y1 <= y)
		{
			if ((y1 == 1 && x1 == 1) || (y1 == 1 && x1 == x))
				ft_putchar('A');
			else if ((y1 == y && x1 == x) || (y1 == y && x1 == 1))
				ft_putchar('C');
			else if ((y1 == 1) || (y1 == y) || (x1 == x) || (x1 == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			y1++;
		}
		ft_putchar('\n');
		x1++;
	}
}
