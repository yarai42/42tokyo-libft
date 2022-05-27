/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:42:42 by yarai             #+#    #+#             */
/*   Updated: 2022/04/06 18:41:30 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *s);

size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
