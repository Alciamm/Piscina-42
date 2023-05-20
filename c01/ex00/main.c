/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:48:22 by amoncayo          #+#    #+#             */
/*   Updated: 2022/10/29 18:11:15 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*ptr;
	int	number;

	number = 42;
	ptr = &number;
	ft_ft(ptr);
	printf("%d\n", *ptr);
	return (0);
}
