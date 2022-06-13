/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 04:40:22 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/07 02:18:53 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	if (tab == NULL)
		return (-1);
	else
	{
		index = 0;
		while ((min + index) < max)
		{
			tab[index] = min + index;
			index++;
		}
		tab[index] = '\0';
		*range = tab;
		return (index);
	}
}
