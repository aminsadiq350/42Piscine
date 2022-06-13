/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:35:12 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:35:16 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if ((str[index] < 'A' || str[index] > 'Z'))
			flag = 0;
		index++;
	}
	return (flag);
}
