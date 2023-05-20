/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:06:28 by amoncayo          #+#    #+#             */
/*   Updated: 2022/10/30 18:08:39 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
int main()
{
	int *ptr1;
	int *ptr2;
	int x;
	int y;
	x = 8;
	y = 2;
	
	ptr1 = &x;
	ptr2 = &y;
	ft_div_mod(x, y, ptr1, ptr2);
	printf("%d \n", x);
	printf("%d \n", y);
	return (0);
}
