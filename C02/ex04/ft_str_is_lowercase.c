/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:34:43 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:34:46 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if ((str[index] < 'a' || str[index] > 'z'))
			flag = 0;
		index++;
	}
	return (flag);
}
