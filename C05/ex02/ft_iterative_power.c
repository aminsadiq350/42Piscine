/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 07:23:30 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/04 22:34:59 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int index;

	result = 1;
	index = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (index++ < power)
		result = result * nb;
	return (result);
}
