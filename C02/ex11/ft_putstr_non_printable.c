/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:42:03 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/08 15:30:56 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_char_printable((unsigned char)str[index]))
			ft_putchar((unsigned char)str[index]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)str[index] / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)str[index] % 16]);
		}
		index++;
	}
}
