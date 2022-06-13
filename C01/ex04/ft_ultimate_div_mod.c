/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 22:16:51 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/26 01:13:31 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int result_a;
	int result_b;

	result_a = *a / *b;
	result_b = *a % *b;
	*a = result_a;
	*b = result_b;
}
