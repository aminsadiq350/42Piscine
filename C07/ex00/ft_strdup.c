/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 04:35:14 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/05 04:37:53 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
