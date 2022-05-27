/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:28:57 by yarai             #+#    #+#             */
/*   Updated: 2022/05/27 00:08:27 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new);

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	while (*lst)
		*lst = ((*lst)-> next);
	*lst = new;
}
