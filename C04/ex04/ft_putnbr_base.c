/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:20:01 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/02 02:40:33 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int		ft_check_invalid(char *base)
{
	int index;
	int index_2;

	index = 0;
	index_2 = 0;
	if (base[index] == '\0' || base[index + 1] == '\0')
		return (0);
	while (base[index] != '\0')
	{
		index_2 = index + 1;
		while (base[index_2] != '\0')
		{
			if (base[index] == base[index_2])
				return (0);
			index_2++;
		}
		if (!((base[index] >= '0' && base[index] <= '9') ||
			(base[index] >= 'A' && base[index] <= 'F') ||
			(base[index] >= 'n' && base[index] <= 'p') || base[index] == 'e' ||
			base[index] == 'y' || base[index] == 'v' || base[index] == 'i' ||
			base[index] == 'f'))
			return (0);
		index++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_num;
	unsigned int	nb;

	base_num = 0;
	nb = (unsigned int)nbr;
	if (ft_check_invalid(base))
	{
		if (nbr < 0)
		{
			ft_put_char('-');
			nb = -1 * nbr;
		}
		while (base[base_num] != '\0')
		{
			base_num++;
		}
		if (nb >= base_num)
		{
			ft_putnbr_base((nb / base_num), base);
			ft_putnbr_base((nb % base_num), base);
		}
		else
			ft_put_char(base[nb]);
	}
}
