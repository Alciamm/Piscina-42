/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:57:52 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/02 11:41:20 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[5] = { 5, 3, 2, 1, 4};
	int size;
	size = 5;
	ft_sort_int_tab (tab, size);
	printf("%d, %d, %d, %d, %d", tab[0],tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
