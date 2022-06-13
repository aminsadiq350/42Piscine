/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 06:28:33 by ashaikhn          #+#    #+#             */
/*   Updated: 2021/06/08 06:28:52 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define READBUF 4097
# define STDIN	0
# define STDOUT 1
# define STDERR 2

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

int		ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void	ft_putstr(char *str, int fd, int len)
{
	int		i;

	if (len == 0)
		len = ft_strlen(str);
	i = -1;
	while (++i < len)
		ft_putchar(str[i], fd);
}

void	ft_read(char *filepath)
{
	int		fd;
	int		read_bytes;
	char	buf[READBUF];

	fd = open(filepath, O_RDONLY);
	if (fd != -1)
		while ((read_bytes = read(fd, buf, READBUF)) != 0)
		{
			ft_putstr(buf, STDOUT, read_bytes);
		}
	else
		ft_putstr("Cannot read file.\n", STDERR, 0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", STDERR, 0);
	else if (argc != 2)
		ft_putstr("Too many arguments.\n", STDERR, 0);
	else
		ft_read(argv[1]);
}

