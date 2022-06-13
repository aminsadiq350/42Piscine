/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 09:33:41 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/04 22:55:23 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		result = ft_recursive_power(nb, power - 1) * nb;
	return (result);
}
