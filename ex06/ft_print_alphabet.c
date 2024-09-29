/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:10:18 by aursuare          #+#    #+#             */
/*   Updated: 2024/06/11 19:45:18 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

void	ft_print_alphabet(void)
{
	int	letra;

	letra = 97;
	while (letra <= 122)
	{
		ft_putchar(letra);
		letra++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (1);
}
*/
