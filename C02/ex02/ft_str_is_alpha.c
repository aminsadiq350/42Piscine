/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:25:10 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:32:52 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if ((str[index] < 'A' || str[index] > 'Z')
				&& (str[index] < 'a' || str[index] > 'z'))
			flag = 0;
		index++;
	}
	return (flag);
}
