/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:36:12 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:36:53 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if ((str[index] < ' ' || str[index] > 127))
			flag = 0;
		index++;
	}
	return (flag);
}
