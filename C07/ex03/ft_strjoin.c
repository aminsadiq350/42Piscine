/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 04:41:38 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/05 04:41:48 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_cal_full_length(char **strings, int num_of_strs, int sep_length)
{
	int	index;
	int	final_length;

	final_length = 0;
	index = 0;
	while (index < num_of_strs)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*str_pt1;
	char	*str_pt2;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_cal_full_length(strs, size, ft_str_length(sep));
	if (!(str_pt2 = (char *)malloc((full_length + 1) * sizeof(char))))
		return (0);
	str_pt1 = str_pt2;
	index = 0;
	while (index < size)
	{
		ft_strcpy(str_pt1, strs[index]);
		str_pt1 += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(str_pt1, sep);
			str_pt1 += ft_str_length(sep);
		}
		index++;
	}
	*str_pt1 = '\0';
	return (str_pt2);
}
