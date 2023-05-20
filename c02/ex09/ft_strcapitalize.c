/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoncayo <amoncayo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:16:43 by amoncayo          #+#    #+#             */
/*   Updated: 2022/11/05 17:31:49 by amoncayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] +32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	x1;

	x = 0;
	x1 = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (x1 == 1)
			{
				str[x] = str[x] - 32;
				x1 = 0;
			}
		}
		else if (str[x] >= '0' && str[x] <= '9')
		{
			x1 = 0;
		}
		else
			x1 = 1;
		x++;
	}		
	return (str);
}
