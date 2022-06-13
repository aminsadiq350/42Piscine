/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:37:35 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:37:52 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z'))
			str[index] -= 32;
		index++;
	}
	return (str);
}
