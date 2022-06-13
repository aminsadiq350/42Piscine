/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:01:35 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/02 11:01:38 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort(int argc, char **argv)
{
	int		index;
	int		index2;
	char	*tmp;

	index = 1;
	while (index < argc - 1)
	{
		index2 = index + 1;
		while (index2 < argc)
		{
			if (ft_strcmp(argv[index], argv[index2]) > 0)
			{
				tmp = argv[index];
				argv[index] = argv[index2];
				argv[index2] = tmp;
			}
			index2++;
		}
		index++;
	}
}

int		main(int argc, char **argv)
{
	int index;
	int index2;

	sort(argc, argv);
	index = 1;
	while (index < argc)
	{
		index2 = 0;
		while (argv[index][index2] != '\0')
		{
			ft_putchar(argv[index][index2]);
			index2++;
		}
		ft_putchar('\n');
		index++;
	}
}
