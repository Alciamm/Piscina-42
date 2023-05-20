/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:08:25 by amoncayo          #+#    #+#             */
/*   Updated: 2022/10/23 17:52:58 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_coordinates(int pl_x, int pl_y, int max_x, int max_y)
{
	if (pl_x == 1 && pl_y == 1)
		ft_putchar('/');
	else if (pl_x == max_x && pl_y == 1)
		ft_putchar('\\');
	else if (pl_x == 1 && pl_y == max_y)
		ft_putchar('\\');
	else if (pl_x == max_x && max_y == pl_y)
		ft_putchar('/');
	else if ((pl_x > 1 && pl_x < max_x) && (pl_y > 1 && pl_y < max_y))
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	pl_x;
	int	pl_y;

	if (x > 0 && y > 0)
	{
		pl_y = 1;
		while (pl_y <= y)
		{
			pl_x = 1;
			while (pl_x <= x)
			{
				ft_coordinates (pl_x, pl_y, x, y);
				pl_x++;
			}
			ft_putchar('\n');
			pl_y++;
		}
	}
}
