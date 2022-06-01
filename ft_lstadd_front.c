/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:56:38 by yarai             #+#    #+#             */
/*   Updated: 2022/05/29 02:24:20 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new);

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
