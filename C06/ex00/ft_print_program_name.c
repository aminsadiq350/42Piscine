/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:00:49 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/02 11:01:54 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int	index;

	index = 0;
	while (argv[0][index] != '\0' && argc)
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
	return (0);
}
