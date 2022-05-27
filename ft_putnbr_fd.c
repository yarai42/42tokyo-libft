/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:18:43 by yarai             #+#    #+#             */
/*   Updated: 2022/05/24 23:02:59 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int	n, int	fd);
void	ft_pchar_fd(char	c, int	fd);

void	ft_pchar_fd(char	c, int	fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int	n, int	fd)
{
	if (n < 0 && n != INT_MIN)
	{
		ft_pchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n < 10)
		ft_pchar_fd(n + '0', fd);
	else
		write(fd, "-2147483648", 11);
}
