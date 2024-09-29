/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:28:49 by aursuare          #+#    #+#             */
/*   Updated: 2024/06/12 18:00:44 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb >= 13)
		return (0);
	else if (nb > 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	else if (nb < 0)
		result = 0;
	return (result);
}
/*
int	main(void)
{
	int	i;

	i = ft_iterative_factorial(7);
	printf("%d", i);
	return (0);
}
*/
