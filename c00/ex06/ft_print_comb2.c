/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:09:11 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/02 16:09:35 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print(x / 10 + '0');
			ft_print(x % 10 + '0');
			write(1, " ", 1);
			ft_print(y / 10 + '0');
			ft_print(y % 10 + '0');
			if (x / 10 != 9 || x % 10 != 8)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
