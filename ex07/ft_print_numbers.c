/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:47:20 by aursuare          #+#    #+#             */
/*   Updated: 2024/06/11 19:46:04 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

void	ft_print_numbers(void)
{
	int	num;

	num = 48;
	while (num <= 57)
	{
		ft_putchar(num);
		num++;
	}
}
