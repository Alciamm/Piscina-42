/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:30:55 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/03 13:04:00 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
		{
		x++;
		}
		else
		{
			return (0);
		}
	}
	if (str[x] == '\0')
	{
		return (1);
	}
	return (1);
}
