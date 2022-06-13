/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 03:46:53 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/31 03:36:01 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && (index < n - 1) && *s1)
	{
		s1++;
		s2++;
		index++;
	}
	return (*s1 - *s2);
}
