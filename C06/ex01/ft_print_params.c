/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:01:05 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/02 11:01:10 by ashaikhn         ###   ########.fr       */
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
	int index2;

	index2 = 1;
	while (index2 < argc)
	{
		index = 0;
		while (argv[index2][index] != '\0')
		{
			ft_putchar(argv[index2][index]);
			index++;
		}
		index2++;
		ft_putchar('\n');
	}
	return (0);
}
