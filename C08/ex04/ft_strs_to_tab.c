/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 03:32:43 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/07 04:02:31 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *src)
{
	int index;

	index = 0;
	while (src[index])
	{
		index++;
	}
	return (index);
}

char				*ft_strdup(char *src)
{
	int		size;
	char	*cpy;

	size = 0;
	while (src[size] != '\0')
		size++;
	cpy = (char *)malloc(size + 1);
	if (cpy == NULL)
		return (0);
	else
	{
		size = 0;
		while (src[size] != 0)
		{
			cpy[size] = src[size];
			size++;
		}
		cpy[size] = '\0';
		return (cpy);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*element;
	int					index;

	index = 0;
	element = malloc(sizeof(struct s_stock_str) * (ac + 1));
	while (index < ac)
	{
		element[index].size = ft_strlen(av[index]);
		element[index].str = av[index];
		element[index].copy = ft_strdup(av[index]);
		index++;
	}
	element[index].size = 0;
	element[index].str = 0;
	element[index].copy = 0;
	return (element);
}
