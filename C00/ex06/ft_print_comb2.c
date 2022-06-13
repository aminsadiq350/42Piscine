/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 06:29:32 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/23 19:09:27 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	digit(char n, int pos)
{
	char d;

	if (pos == 1)
	{
		d = n / 10 + '0';
	}
	else
	{
		d = n % 10 + '0';
	}
	return (d);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (!(a == 0 && b == 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(digit(a, 1));
			ft_putchar(digit(a, 0));
			ft_putchar(' ');
			ft_putchar(digit(b, 1));
			ft_putchar(digit(b, 0));
			b++;
		}
		a++;
	}
}
