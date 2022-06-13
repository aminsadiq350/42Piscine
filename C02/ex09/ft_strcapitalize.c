/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:38:59 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 02:39:44 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		special_char_check;

	index = 0;
	special_char_check = 1;
	while (str[index] != '\0')
	{
		if (special_char_check == 1 && str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		else if (special_char_check == 0
				&& str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		if (str[index] < '0' || (str[index] > '9' && str[index] < 'A')
				|| (str[index] > 'Z' && str[index] < 'a') || str[index] > 'z')
			special_char_check = 1;
		else
			special_char_check = 0;
		index++;
	}
	return (str);
}
