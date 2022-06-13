/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:38:00 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/04 22:38:07 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calculate(int nb, long double approx, long double prev_approx)
{
	if (approx * approx <= 2147483647 && (int)approx * (int)approx == nb)
		return ((int)approx);
	if ((int)approx == (int)prev_approx)
		return (0);
	else
		return (calculate(nb, (approx + nb / approx) / 2, approx));
}

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (calculate(nb, 50, 0));
}
