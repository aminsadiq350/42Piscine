/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 04:38:24 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/05 10:08:07 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int index;

	index = 0;
	range = (int *)malloc((max - min + 1) * sizeof(int));
	if (min >= max || range == NULL)
		return (NULL);
	while (min < max)
	{
		range[index] = min;
		index++;
		min++;
	}
	range[index] = '\0';
	return (range);
}
