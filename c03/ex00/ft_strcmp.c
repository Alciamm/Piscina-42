/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:18:29 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/08 17:39:40 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	printf("%d", ft_strcmp("Hola", "Hola"));
	printf("\n %d", ft_strcmp("Hello", "Hola"));
	printf("\n %d", ft_strcmp("Bye", "Adios"));
	return (0);
}*/
