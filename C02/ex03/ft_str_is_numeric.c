/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:33:50 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:34:12 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			flag = 0;
		index++;
	}
	return (flag);
}
