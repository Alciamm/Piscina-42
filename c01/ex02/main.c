/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:42:27 by amoncayo          #+#    #+#             */
/*   Updated: 2022/10/30 16:59:03 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int x;
	int y;

	x = 2;
	y = 4;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
	return (0);

}
