/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:02:39 by melcuman          #+#    #+#             */
/*   Updated: 2023/09/14 20:15:17 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size_of_the_string;
	int	i;

	i = 0;
	size_of_the_string = 0;
	while (str[i])
	{
		size_of_the_string++;
		i++;
	}
	return (size_of_the_string);
}
