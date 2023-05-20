/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:12:05 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/02 11:47:16 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int x;
	int y;
	x = 8;
	y = 4;
	
	ft_ultimate_div_mod(&x, &y);
	printf("%d \n", x);
	printf("%d \n", y);
	return (0);
}
