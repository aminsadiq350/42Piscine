/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 06:48:46 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/05/29 06:48:51 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int index;

	dest_len = 0;
	src_len = 0;
	index = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	if (size < dest_len)
		src_len += size;
	else
		src_len += dest_len;
	while (src[index] != '\0' && (dest_len + index) < (size - 1))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (src_len);
}
