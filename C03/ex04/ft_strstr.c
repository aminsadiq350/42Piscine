/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 05:50:53 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 05:50:55 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int match;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			index = 0;
			match = 1;
			while (to_find[index] != '\0')
			{
				if (str[index] != to_find[index])
					match = 0;
				index++;
			}
			if (match)
				return (str);
		}
		str++;
	}
	return (0);
}
