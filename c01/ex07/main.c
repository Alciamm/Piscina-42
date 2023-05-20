/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:25:25 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/01 13:15:23 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab [] = { 1, 2, 3, 4, 5, 6};
	int size;
	size = 6;
	ft_rev_int_tab(tab, size);
	int i;
	for(i = 0; i < 6; i++)
	{
		printf("%d ", tab[i]);
	}
	return (0);
}
