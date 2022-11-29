/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:53:08 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/21 01:18:08 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	long int	ln;

	ln = nb;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln = ln * -1;
	}
	if (ln > 9)
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
	else
	{
		ln = ln + '0';
		write(fd, &ln, 1);
	}
}

int main(void)
{
	int nbr;

	nbr = 2345678;
	ft_putnbr_fd(nbr, 1);
	return (0);
}