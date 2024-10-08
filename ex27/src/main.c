/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:31:30 by aursuare          #+#    #+#             */
/*   Updated: 2024/07/16 18:32:37 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, const char *argv[])
{
	if (argc < 2)
	{
		ft_escribe_pls("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_escribe_pls("Too many arguments.\n");
		return (1);
	}
	else
		ft_display_file(argv[1]);
	return (0);
}
