/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklimkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:05:34 by dklimkin          #+#    #+#             */
/*   Updated: 2023/08/31 19:05:37 by dklimkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	temp_n;

	temp_n = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		temp_n *= -1;
	}
	if (temp_n >= 10)
	{
		ft_putnbr_fd((temp_n / 10), fd);
		c = (temp_n % 10) + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = temp_n + '0';
		write(fd, &c, 1);
	}
}
