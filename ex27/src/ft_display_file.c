/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:44:01 by aursuare          #+#    #+#             */
/*   Updated: 2024/07/16 18:30:46 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(const char *file)
{
	int		ofile;
	char	buffer[128];
	ssize_t	bytes_read;

	bytes_read = 1;
	ofile = open(file, O_RDONLY);
	if (ofile == -1)
		ft_escribe_pls("Cannot open file.\n");
	else
	{
		while (bytes_read > 0)
		{
			bytes_read = read(ofile, buffer, (128 - 1));
			write(1, buffer, bytes_read);
		}
		if (bytes_read == -1)
			ft_escribe_pls("Cannot read file.\n");
	}
	close(ofile);
}
