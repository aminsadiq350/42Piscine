/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:34:15 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/26 01:01:46 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int	min_index;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_index])
				min_index = j;
			j++;
		}
		swap(&tab[min_index], &tab[i]);
		i++;
	}
}
